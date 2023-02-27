#include "DateFactory.hpp"

Date DateFactory::createDate(std::int64_t year,
                             std::uint8_t month,
                             std::uint8_t day,
                             std::uint8_t hour,
                             std::uint8_t minute,
                             std::uint8_t second)
{
    Date date;
    date.setYear(year);
    date.setMonth(month);
    date.setDay(day);
    date.setHour(hour);
    date.setMinute(minute);
    date.setSecond(second);
    return date;
}
