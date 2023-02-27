#pragma once

#include <string>

#include "Date.hpp"

class IDateFactoryFromString {
public:
   virtual Date createDate(const std::string& str) = 0;
};
