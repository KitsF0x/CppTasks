#include "Task.hpp"

std::string Task::getName() const
{
    return name;
}
std::string Task::getDescription() const
{
    return description;
}
Date Task::getAddDate() const
{
    return addDate;
}
Date Task::getDeadlineDate() const
{
    return deadlineDate;
}
bool Task::getFinished() const
{
    return finished;
}

void Task::setName(const std::string &name)
{
    this->name = name;
}
void Task::setDescription(const std::string &description)
{
    this->description = description;
}
void Task::setAddDate(const Date &addDate)
{
    this->addDate = addDate;
}
void Task::setDeadlineDate(const Date &deadlineDate)
{
    this->deadlineDate = deadlineDate;
}
void Task::setFinished(bool finished)
{
    this->finished = finished;
}
