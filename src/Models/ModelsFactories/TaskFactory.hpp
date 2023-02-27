#pragma once

#include "ITaskFactory.hpp"

class TaskFactory : public ITaskFactory
{
public:
    Task createTask(std::string name, std::string description, Date addDate, Date deadlineDate, bool finished) override;
};
