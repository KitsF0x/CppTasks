#include "MainMenuScreen.hpp"
#include "DeleteTaskScreen.hpp"

MainMenuScreen::MainMenuScreen(std::shared_ptr<IScreenManager> screenManager) : screenManager(screenManager)
{

}

void MainMenuScreen::init()
{
}

void MainMenuScreen::run()
{
    std::cout << "CppTasks - Cross-platform TODO terminal app " << char(2) << "\n\n\n\n";
    std::cout << "Please select option: \n\n";
    std::cout << "1. Display mode\n";
    std::cout << "2. Edit mode \n";
    std::cout << "3. Statistics \n";
    std::cout << "4. Exit\n\n";
    std::cout << ">>> ";

    char input{0};
    std::cin >> input;

    switch (input)
    {
    case '1':
        screenManager->add(std::make_shared<DisplayScreen>(screenManager));
        break;
    case '2':
        screenManager->add(std::make_shared<EditModeScreen>(screenManager));
        break;
    case '4':
        exit(0);
        break;
    default:
        break;
    }
}
