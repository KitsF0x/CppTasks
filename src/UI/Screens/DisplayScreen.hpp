#pragma once

#include <iostream>

#include "IScreen.hpp"
#include "IScreenManager.hpp"

#include "CsvDatabaseConnector.hpp"
#include "TaskView.hpp"
#include "TasksRepositoryView.hpp"

#include "BaseScreen.hpp"

class DisplayScreen : public BaseScreen {
protected:

public:
    DisplayScreen(std::shared_ptr<IScreenManager> screenManager);
    void init() override;
    void run() override;
};
