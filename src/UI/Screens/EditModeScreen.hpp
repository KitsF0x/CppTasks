#pragma once

#include "IScreen.hpp"
#include "IScreenManager.hpp"
#include "AddTaskScreen.hpp"
#include <iostream>

class EditModeScreen : public BaseScreen {
private:
    std::shared_ptr<IScreenManager> screenManager;

public:
    EditModeScreen(std::shared_ptr<IScreenManager> screenManager);
    void init() override;
    void run() override;
};
