#pragma once


#include "IDateFactory.hpp"

class DateFactory : public IDateFactory
{
public:
    Date createDate(std::int64_t year,
                    std::uint8_t month,
                    std::uint8_t day,
                    std::uint8_t hour,
                    std::uint8_t minute,
                    std::uint8_t second) override;
};
