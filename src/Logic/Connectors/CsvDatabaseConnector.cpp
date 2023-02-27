#include "CsvDatabaseConnector.hpp"

std::shared_ptr<ITasksRepository> CsvDatabaseConnector::load(const std::string &name)
{
    return database->load(name);
}

void CsvDatabaseConnector::save(std::shared_ptr<ITasksRepository> taskRepository, const std::string &name)
{
    database->save(taskRepository, name);
}
