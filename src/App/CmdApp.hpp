#pragma once

#include "CsvDatabase.hpp"
#include "CsvDatabaseConnector.hpp"
#include "TasksRepository.hpp"

#include "DateFactoryFromStringEuropean.hpp"
#include "TaskFactory.hpp"

#include "EuropeDateToStringConverter.hpp"
#include "TaskView.hpp"

#include <iostream>

#include "MainMenuScreen.hpp"
#include "ScreenManager.hpp"


#include "IApp.hpp"

class CmdApp : public IApp {
public:
    void run() override;
};
