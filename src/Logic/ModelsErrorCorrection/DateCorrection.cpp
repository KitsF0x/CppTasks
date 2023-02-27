#include "DateCorrection.hpp"


Date DateCorrection::correct(Date date)
{
    if (date.getDay() > 31)
    {
        date.setDay(31);
    }
    else if (date.getDay() == 0)
    {
        date.setDay(1);
    }

    if (date.getMonth() > 12)
    {
        date.setMonth(12);
    }
    else if (date.getMonth() == 0)
    {
        date.setMonth(1);
    }

    if (date.getHour() > 23)
    {
        date.setHour(23);
    }
    if (date.getMinute() > 53)
    {
        date.setMinute(53);
    }
    if (date.getSecond() > 59)
    {
        date.setSecond(59);
    }

    return date;
}
