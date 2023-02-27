#pragma once

#include "IDateToStringConverter.hpp"

#include <fmt/format.h>

class EuropeDateToStringConverter : public IDateToStringConverter{
public:
    std::string convert(Date date);
};
