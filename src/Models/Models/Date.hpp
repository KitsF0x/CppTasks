#pragma once

#include <cstdint>

class Date
{
private:
    std::int64_t year;
    std::uint8_t month;
    std::uint8_t day;

    std::uint8_t hour;
    std::uint8_t minute;
    std::uint8_t second;

public:
    std::int64_t getYear() const;
    std::uint8_t getMonth() const;
    std::uint8_t getDay() const;

    std::uint8_t getHour() const;
    std::uint8_t getMinute() const;
    std::uint8_t getSecond() const;

    void setYear(std::int64_t year);
    void setMonth(std::uint8_t month);
    void setDay(std::uint8_t day);

    void setHour(std::uint8_t hour);
    void setMinute(std::uint8_t minute);
    void setSecond(std::uint8_t second);
};
