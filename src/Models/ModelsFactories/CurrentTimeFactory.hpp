#pragma once

#include <ctime>
#include <memory>

#include "IDateFactoryNoArgs.hpp"
#include "IDateFactory.hpp"


class CurrentTimeFactory : public IDateFactoryNoArgs
{
public:
    Date create() override;
};
