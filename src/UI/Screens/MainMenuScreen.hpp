#pragma once

#include "IScreen.hpp"

#include "ScreenManager.hpp"
#include "DisplayScreen.hpp"
#include "EditModeScreen.hpp"

#include <iostream>

class MainMenuScreen : public IScreen {
private:
    std::shared_ptr<IScreenManager> screenManager;

public:
    MainMenuScreen(std::shared_ptr<IScreenManager> screenManager);
    void init() override;
    void run() override;
};
