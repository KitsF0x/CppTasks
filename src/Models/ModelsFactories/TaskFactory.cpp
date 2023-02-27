#include "TaskFactory.hpp"

Task TaskFactory::createTask(std::string name, std::string description, Date addDate, Date deadlineDate, bool finished)
{
    Task task;
    task.setName(name);
    task.setDescription(description);
    task.setAddDate(addDate);
    task.setDeadlineDate(deadlineDate);
    return task;
}
