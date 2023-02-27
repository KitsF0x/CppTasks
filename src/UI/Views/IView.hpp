#pragma once


#include "Date.hpp"
#include "Task.hpp"

template<class T>
class IView {
public:
    virtual void draw(T& model) = 0;
};
