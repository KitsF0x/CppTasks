#pragma once

#include "Date.hpp"

class IDateFactory
{
public:
    virtual Date createDate(std::int64_t year,
                           std::uint8_t month,
                           std::uint8_t day,
                           std::uint8_t hour,
                           std::uint8_t minute,
                           std::uint8_t second) = 0;
};
