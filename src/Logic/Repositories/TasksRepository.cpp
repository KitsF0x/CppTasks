#include "TasksRepository.hpp"

void TasksRepository::addTask(Task task)
{
    tasks.push_back(task);
}

void TasksRepository::editTask(Task task, std::size_t id) {
    tasks.at(id) = task;
}

std::shared_ptr<Task> TasksRepository::getTaskPointerById(std::size_t id)
{
    return std::make_shared<Task>(tasks.at(id));
}

void TasksRepository::removeTaskById(std::size_t id)
{
    tasks.erase(tasks.begin() + id);
}

void TasksRepository::set(std::vector<Task> tasks)
{
    this->tasks = tasks;
}

std::vector<Task> TasksRepository::get()
{
    return tasks;
}
