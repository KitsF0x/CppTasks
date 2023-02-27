#include "EditModeScreen.hpp"
#include "DeleteTaskScreen.hpp"
#include "EditTaskScreen.hpp"

EditModeScreen::EditModeScreen(std::shared_ptr<IScreenManager> screenManager) : screenManager(screenManager)
{
}

void EditModeScreen::init()
{
}

void EditModeScreen::run()
{
    std::cout << "Please select option: \n\n";
    std::cout << "1. Add task\n";
    std::cout << "2. Edit task \n";
    std::cout << "3. Delete task \n";
    std::cout << "4. Exit\n\n";
    std::cout << ">>> ";

    char input{0};
    std::cin >> input;

    switch (input)
    {
    case '1':
        screenManager->add(std::make_shared<AddTaskScreen>(screenManager));
        break;
    case '2':
        screenManager->add(std::make_shared<EditTaskScreen>(screenManager));
        break;
    case '3':
        screenManager->add(std::make_shared<DeleteTaskScreen>(screenManager));
        break;
    case '4':
        screenManager->pop();
        break;
    default:
        break;
    }
}
