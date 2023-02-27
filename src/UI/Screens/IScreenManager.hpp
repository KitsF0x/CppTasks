#pragma once

#include <string>
#include <memory>

#include "IScreen.hpp"

class IScreenManager {
public:
    virtual void add(std::shared_ptr<IScreen> screen) = 0;
    virtual void pop() = 0;
    virtual void processTop() = 0;
};
