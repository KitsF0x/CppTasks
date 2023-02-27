#pragma once

#include <string>

#include "Date.hpp"

class IDateToStringConverter {
public:
    virtual std::string convert(Date date) = 0;
};
