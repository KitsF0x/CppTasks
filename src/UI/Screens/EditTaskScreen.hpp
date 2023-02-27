#pragma once

#include "BaseScreen.hpp"

class EditTaskScreen : public BaseScreen {
public:
    EditTaskScreen(std::shared_ptr<IScreenManager> screenManager);
    void init() override;
    void run() override;
};
