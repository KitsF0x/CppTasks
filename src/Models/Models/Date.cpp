#include "Date.hpp"

std::int64_t Date::getYear() const
{
    return year;
}
std::uint8_t Date::getMonth() const
{
    return month;
}
std::uint8_t Date::getDay() const
{
    return day;
}

std::uint8_t Date::getHour() const
{
    return hour;
}
std::uint8_t Date::getMinute() const
{
    return minute;
}
std::uint8_t Date::getSecond() const
{
    return second;
}

void Date::setYear(std::int64_t year)
{
    this->year = year;
}
void Date::setMonth(std::uint8_t month)
{
    this->month = month;
}
void Date::setDay(std::uint8_t day)
{
    this->day = day;
}

void Date::setHour(std::uint8_t hour)
{
    this->hour = hour;
}
void Date::setMinute(std::uint8_t minute)
{
    this->minute = minute;
}
void Date::setSecond(std::uint8_t second)
{
    this->second = second;
}
