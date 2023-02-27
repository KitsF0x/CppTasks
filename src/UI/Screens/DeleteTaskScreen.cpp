#include "DeleteTaskScreen.hpp"
#include "CsvDatabaseConnector.hpp"
#include "TaskWizard.hpp"
#include "TasksRepositoryView.hpp"


DeleteTaskScreen::DeleteTaskScreen(std::shared_ptr<IScreenManager> screenManager)
{
    this->screenManager = screenManager;
}

void DeleteTaskScreen::init()
{
    this->tasksRepo = databaseConnector->load(dbName);
}

void DeleteTaskScreen::run()
{
    TasksRepositoryView view;
    view.draw(tasksRepo);
    std::cout << "Select task to delete by id: ";

    std::size_t id{0};
    std::cin >> id;

    std::cout << "Delete? (y)" << std::endl;
    char input{0};
    std::cin >> input;
    if(input == 'y') {
        tasksRepo->removeTaskById(id);
        databaseConnector->save((tasksRepo), dbName);
    }

    screenManager->pop();
}
