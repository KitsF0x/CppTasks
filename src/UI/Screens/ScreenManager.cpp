#include "ScreenManager.hpp"

void ScreenManager::add(std::shared_ptr<IScreen> screen)
{
    screens.push(screen);
    screens.top()->init();
}

void ScreenManager::pop()
{
    screens.pop();
}

void ScreenManager::processTop()
{
    system("cls"); // Add later OS checking
    screens.top()->run();
}
