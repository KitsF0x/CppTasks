#pragma  once

#include "Date.hpp"

class IDateFactoryNoArgs
{
public:
    virtual Date create() = 0;
};
