#include "DisplayScreen.hpp"
#include "TasksRepositoryView.hpp"
#include "TaskView.hpp"

DisplayScreen::DisplayScreen(std::shared_ptr<IScreenManager> screenManager)
{
    this->screenManager = screenManager;
}

void DisplayScreen::init()
{
    this->tasksRepo = databaseConnector->load(dbName);
}

void DisplayScreen::run()
{
    TasksRepositoryView view;
    view.draw(tasksRepo);
    std::cout << "Press 'q' to exit" << std::endl;

    char input{0};
    std::cin >> input;
    if(input == 'q') {
        screenManager->pop();
    }
}
