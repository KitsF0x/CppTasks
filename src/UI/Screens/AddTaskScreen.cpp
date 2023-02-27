#include "AddTaskScreen.hpp"
#include "DateWizard.hpp"
#include "IView.hpp"
#include "IWizard.hpp"
#include "TaskWizard.hpp"

AddTaskScreen::AddTaskScreen(std::shared_ptr<IScreenManager> screenManager) {
    this->screenManager = screenManager;
}

void AddTaskScreen::init()
{
    this->tasksRepo = databaseConnector->load(dbName);
}

void AddTaskScreen::run()
{
    std::cout << "Task creation wizard(please do not use: \" in name and description, because big disaster will happen)\n\n\n";

    std::unique_ptr<IWizard<Task>> taskWizard = std::make_unique<TaskWizard>();
    std::unique_ptr<IView<Task>> taskView = std::make_unique<TaskView>();
    Task task = taskWizard->startWizard();
    taskView->draw(task);

    std::cout << "Add task?(y/n)";
    char addTask;
    std::cin >> addTask;
    if(std::tolower(addTask) != 'n' ) {
        tasksRepo->addTask(task);
        databaseConnector->save(tasksRepo, dbName);
    }
    screenManager->pop();
}
