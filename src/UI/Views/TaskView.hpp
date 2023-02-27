#pragma once

#include <fmt/format.h>

#include "EuropeDateToStringConverter.hpp"
#include "IView.hpp"

class TaskView : public IView<Task> {
private:
    EuropeDateToStringConverter converter;

public:
    void draw(Task& task) override;
};
