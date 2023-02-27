#include "EuropeDateToStringConverter.hpp"

std::string EuropeDateToStringConverter::convert(Date date)
{
    return fmt::format("{}/{}/{} {}:{}:{}",
                       date.getDay(),
                       date.getMonth(),
                       date.getYear(),
                       date.getHour(),
                       date.getMinute(),
                       date.getSecond());
}
