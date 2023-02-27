#pragma once

#include <memory>

#include "DisplayScreen.hpp"
#include "TaskWizard.hpp"

#include "TaskView.hpp"

#include "BaseScreen.hpp"

class AddTaskScreen : public BaseScreen {
public:
    AddTaskScreen(std::shared_ptr<IScreenManager> screenManager);
    void init() override;
    void run() override;
};
