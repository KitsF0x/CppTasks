#include "EditTaskScreen.hpp"
#include "TaskWizard.hpp"
#include "TasksRepositoryView.hpp"


EditTaskScreen::EditTaskScreen(std::shared_ptr<IScreenManager> screenManager)
{
    this->screenManager = screenManager;
}

void EditTaskScreen::init()
{
    this->tasksRepo = databaseConnector->load(dbName);
}

void EditTaskScreen::run()
{
    TasksRepositoryView view;
    view.draw(tasksRepo);
    std::cout << "Select task by id: ";

    std::size_t id{0};
    std::cin >> id;
    TaskWizard wizard;
    Task task = wizard.startWizard();

    char add;
    std::cout << "Add task?(y)";
    std::cin >> add;

    if(std::tolower(add) == 'y') {
        tasksRepo->editTask(task, id);
        databaseConnector->save(tasksRepo, dbName);
    }
    this->screenManager->pop();
}
