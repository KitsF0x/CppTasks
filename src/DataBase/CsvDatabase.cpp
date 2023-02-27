#include "CsvDatabase.hpp"
#include "ITasksRepository.hpp"
#include "TasksRepository.hpp"

void CsvDatabase::save(std::shared_ptr<ITasksRepository> repository, const std::string &name)
{
    std::fstream fileHandle{name, std::ios::out};
    EuropeDateToStringConverter europeConverter;

    for (int i = 0; i < repository->get().size(); i++)
    {
        auto el = repository->getTaskPointerById(i);
        std::string line = fmt::format("\"{}\", \"{}\", \"{}\", \"{}\", \"{}\"\n",
                                       el->getName(),
                                       el->getDescription(),
                                       europeConverter.convert(el->getAddDate()),
                                       europeConverter.convert(el->getDeadlineDate()),
                                       (el->getFinished()) ? ("1") : ("0"));
        fileHandle << line;
    }
    fileHandle.close();
}

std::shared_ptr<ITasksRepository> CsvDatabase::load(const std::string &name)
{
    std::shared_ptr<ITasksRepository> repository = std::make_shared<TasksRepository>();

    std::fstream fileHandle{name, std::ios::in};
    std::string line;

    DateFactoryFromStringEuropean factory;

    bool parsingString{false};

    while (std::getline(fileHandle, line))
    {
        std::array<std::string, 5> values;
        std::uint8_t index{0};

        for (auto &el : line)
        {
            if (el == '\"')
            {
                (parsingString == false) ? (parsingString = true) : (parsingString = false);
                continue;
            }
            if (el == ',' && parsingString == false)
            {
                index++;
                continue;
            }
            try
            {
                values.at(index).push_back(el);
            }
            catch (std::out_of_range &e)
            {
                Utils::printErrorCode(e, "Error occurred while parsing data from database.");
            }
        }
        Utils::removeSpacesFromTheTheBeginning<5>(values);

        Task task;

        try {
            task.setName(values.at(0));
            task.setDescription(values.at(1));

            task.setAddDate(factory.createDate(values.at(2)));
            task.setDeadlineDate(factory.createDate(values.at(3)));


            if (values.at(4).at(0) == '0')
            {
                task.setFinished(false);
            }
            else if (values.at(4).at(0) == '1')
            {
                task.setFinished(true);
            }
        } catch(std::exception& e) {
            Utils::printErrorCode(e, "Error occurred while creating Task object");
        }

        repository->addTask(task);
    }
    return repository;
}
