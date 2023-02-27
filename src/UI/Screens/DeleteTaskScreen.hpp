#pragma once

#include "BaseScreen.hpp"

class DeleteTaskScreen : public BaseScreen {
public:
    DeleteTaskScreen(std::shared_ptr<IScreenManager> screenManager);
    void init() override;
    void run() override;
};
