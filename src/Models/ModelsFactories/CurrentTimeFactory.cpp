#include "CurrentTimeFactory.hpp"
#include "DateFactory.hpp"
#include "IDateFactory.hpp"


Date CurrentTimeFactory::create()
{
    const std::unique_ptr<IDateFactory> dateFactory = std::make_unique<DateFactory>();


    std::time_t now = std::time(0);
    std::tm *localTime = std::localtime(&now);

    return dateFactory->createDate(1900 + localTime->tm_year,
                                   1 + localTime->tm_mon,
                                   localTime->tm_mday,
                                   localTime->tm_hour,
                                   localTime->tm_min,
                                   localTime->tm_sec);

}
