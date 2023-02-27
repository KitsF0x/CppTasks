#pragma once

#include "IDatabaseConnector.hpp"

#include "CsvDatabase.hpp"

class CsvDatabaseConnector : public IDatabaseConnector {
private:
    IDatabase* database{new CsvDatabase()};
public:
    std::shared_ptr<ITasksRepository> load(const std::string &name) override;
    void save(std::shared_ptr<ITasksRepository> taskRepository, const std::string &name) override;
};
