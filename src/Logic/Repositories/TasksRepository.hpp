#pragma once

#include <algorithm>

#include "ITasksRepository.hpp"

class TasksRepository : public ITasksRepository
{
private:
    std::vector<Task> tasks;

public:
    void addTask(Task task) override;
    void editTask(Task task, std::size_t id) override;
    std::shared_ptr<Task> getTaskPointerById(std::size_t id) override;
    void removeTaskById(std::size_t id) override;
    void set(std::vector<Task> tasks) override;
    std::vector<Task> get() override;
};
