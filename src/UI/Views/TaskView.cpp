#include "TaskView.hpp"

void TaskView::draw(Task &task)
{
    fmt::print("\"{}\" \"{}\" \t [{}] \t [{}] -> {}\n",
               task.getName(),
               task.getDescription(),
               converter.convert(task.getAddDate()),
               converter.convert(task.getDeadlineDate()),
               task.getFinished());
}
