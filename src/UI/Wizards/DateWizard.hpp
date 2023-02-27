#pragma once

#include <iostream>
#include <memory>

#include "Date.hpp"
#include "DateCorrection.hpp"
#include "DateFactory.hpp"
#include "IWizard.hpp"

class DateWizard : public IWizard<Date>
{
public:
    virtual ~DateWizard() = default;
    virtual Date startWizard();
};
