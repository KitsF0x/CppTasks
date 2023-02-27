#include "TaskWizard.hpp"

Task TaskWizard::startWizard()
{
    std::string name;
    std::string description;
    Date addDate;
    Date deadlineDate;

    TaskFactory taskFactory;
    DateWizard dateWizard;
    CurrentTimeFactory currentDate;

    std::cin.ignore();
    std::cout << "Task name: ";
    std::getline(std::cin, name);
    std::cout << "Task description: ";
    std::getline(std::cin, description);


    addDate = currentDate.create();
    deadlineDate = dateWizard.startWizard();

    return taskFactory.createTask(name, description, addDate, deadlineDate, false);
}
