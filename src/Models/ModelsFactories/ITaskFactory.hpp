#pragma once

#include "Task.hpp"

class ITaskFactory
{
public:
    virtual Task createTask(std::string name,
                            std::string description,
                            Date addDate,
                            Date deadlineDate,
                            bool finished) = 0;
};
