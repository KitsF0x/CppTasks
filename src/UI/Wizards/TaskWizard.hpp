#pragma once

#include "IWizard.hpp"
#include "Task.hpp"
#include "ITaskFactory.hpp"
#include "TaskFactory.hpp"


#include "DateWizard.hpp"
#include "CurrentTimeFactory.hpp"

class TaskWizard : public IWizard<Task>
{
public:
    virtual ~TaskWizard() = default;
    Task startWizard() override;
};
