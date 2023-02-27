#pragma once

#include <string>

class IScreen {
public:
    virtual void init() = 0;
    virtual void run() = 0;
};
