#include "DateWizard.hpp"

Date DateWizard::startWizard()
{
    std::int64_t year{0};
    std::uint16_t month{0};
    std::uint16_t day{0};

    std::uint16_t hour{0};
    std::uint16_t minute{0};
    std::uint16_t second{0};

    std::cout << "Year: ";
    std::cin >> year;
    std::cout << "Month: ";
    std::cin >> month;
    std::cout << "Day: ";
    std::cin >> day;

    std::cout << "Hour: ";
    std::cin >> hour;
    std::cout << "Minute: ";
    std::cin >> minute;
    std::cout << "Second: ";
    std::cin >> second;

    const std::unique_ptr<IDateFactory> factory = std::make_unique<DateFactory>();
    const std::unique_ptr<ICorrection<Date>> correction = std::make_unique<DateCorrection>();

    Date date = factory->createDate(year, month, day, hour, minute, second);
    date = correction->correct(date);

    return date;
}
