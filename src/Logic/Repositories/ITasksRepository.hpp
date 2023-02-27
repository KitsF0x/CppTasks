#pragma once

#include <vector>
#include <memory>
#include "Task.hpp"

class ITasksRepository
{
public:
    virtual void addTask(Task task) = 0;
    virtual void editTask(Task task, std::size_t id) = 0;
    virtual std::shared_ptr<Task> getTaskPointerById(std::size_t id) = 0;
    virtual void removeTaskById(std::size_t id) = 0;
    virtual void set(std::vector<Task> tasks) = 0;
    virtual std::vector<Task> get() = 0;
};
