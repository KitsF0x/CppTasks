#pragma once

template<class T>
class IWizard {
public:
    virtual T startWizard() = 0;
};
