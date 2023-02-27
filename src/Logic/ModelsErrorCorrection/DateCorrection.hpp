#pragma once

#include "ICorrection.hpp"

#include "Date.hpp"

class DateCorrection : public ICorrection<Date> {
public:
    Date correct(Date date) override;
};
