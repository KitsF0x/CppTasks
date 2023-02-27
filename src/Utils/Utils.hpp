#pragma once

#include <array>
#include <exception>
#include <iostream>
#include <string>

class Utils
{
public:
    static void printErrorCode(const std::exception &e, const std::string &log);

    template <size_t count>
    static void printArrayOfStrings(std::array<std::string, count> arr)
    {
        for (int i = 0; i < count; i++)
        {
            std::cout << i << ". " << arr.at(i) << std::endl;
        }
        std::cout << "==============" << std::endl;
    }
    template <size_t count>
    static void removeSpacesFromTheTheBeginning(std::array<std::string, count>& arr)
    {
        try {
            for (int i = 0; i < count; i++)
            {
                while(arr.at(i).at(0) == ' ') {
                    arr.at(i).erase(0, 1);
                }
            }
        } catch(std::exception& e) {
            Utils::printErrorCode(e, "Error occurred while removing spaces from string.");
        }
    }
};
