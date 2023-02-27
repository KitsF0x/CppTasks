#pragma once

#include "ITasksRepository.hpp"
#include "IDatabase.hpp"

class IDatabaseConnector {
public:
    virtual std::shared_ptr<ITasksRepository> load(const std::string &name) = 0;
    virtual void save(std::shared_ptr<ITasksRepository> taskRepository, const std::string &name) = 0;
};
