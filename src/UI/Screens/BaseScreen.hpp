#pragma once

#include <memory>
#include "CsvDatabaseConnector.hpp"
#include "IScreenManager.hpp"
#include "IDatabaseConnector.hpp"
#include "ITasksRepository.hpp"

#include "IScreen.hpp"

class BaseScreen : public IScreen {
protected:
    std::shared_ptr<IScreenManager> screenManager;
    std::shared_ptr<IDatabaseConnector> databaseConnector{std::make_shared<CsvDatabaseConnector>()};
    std::shared_ptr<ITasksRepository> tasksRepo;
    std::string dbName{"test.csv"};
};
