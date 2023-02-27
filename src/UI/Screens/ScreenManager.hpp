#pragma once

#include <stack>

#include "IScreenManager.hpp"

class ScreenManager : public IScreenManager {

private:
    std::stack<std::shared_ptr<IScreen>> screens;

public:
    void add(std::shared_ptr<IScreen> screen) override;
    void pop() override;
    void processTop() override;
};
