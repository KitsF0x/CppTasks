#include "TasksRepositoryView.hpp"


void TasksRepositoryView::draw(std::shared_ptr<ITasksRepository>& tasksRepo)
{
    TaskView view;
    std::vector<Task> vec = tasksRepo->get();
    for(std::size_t i = 0; i < vec.size(); i++) {
        std::cout << i <<". ";
        view.draw(vec.at(i));
    }
}
