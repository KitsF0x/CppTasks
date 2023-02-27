#pragma once

#include "IDateFactoryFromString.hpp"

#include <array>
#include <iostream>

#include "Utils.hpp"

class DateFactoryFromStringEuropean : public IDateFactoryFromString {
public:
    Date createDate(const std::string& str) override;
};
