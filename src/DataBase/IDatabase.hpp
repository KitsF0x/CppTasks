#pragma once

#include <string>

#include "ITasksRepository.hpp"

class IDatabase
{
public:
    virtual void save(std::shared_ptr<ITasksRepository> repository, const std::string &name) = 0;
    virtual std::shared_ptr<ITasksRepository> load(const std::string &name) = 0;
};
