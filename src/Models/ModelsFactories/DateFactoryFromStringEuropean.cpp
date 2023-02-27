#include "DateFactoryFromStringEuropean.hpp"

// DD/MM/YYYY hh:mm:ss
Date DateFactoryFromStringEuropean::createDate(const std::string& str) {

    std::array<std::string, 6> tokens;
    std::uint8_t index{0};

    for(auto &el : str) {
        if(el == ':' || el == '/' || el == ' ') {
            index++;
            continue;
        }
        try {
            tokens.at(index).push_back(el);
        } catch(std::out_of_range& e) {
            Utils::printErrorCode(e, "Error ocurred while parsing date format string. ");
        }
    }

    Date date;


    date.setDay(std::stoi(tokens.at(0)));
    date.setMonth(std::stoi(tokens.at(1)));
    date.setYear(std::stol(tokens.at(2)));

    date.setHour(std::stoi(tokens.at(3)));
    date.setMinute(std::stoi(tokens.at(4)));

    date.setSecond(std::stoi(tokens.at(5)));

    return date;
}
