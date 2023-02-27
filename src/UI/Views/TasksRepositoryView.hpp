#pragma once

#include "IView.hpp"
#include "TasksRepository.hpp"
#include "TaskView.hpp"

class TasksRepositoryView : public IView<std::shared_ptr<ITasksRepository>> {
public:
    void draw(std::shared_ptr<ITasksRepository>& tasksRepo) override;
};
