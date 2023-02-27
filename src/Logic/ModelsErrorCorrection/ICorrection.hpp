#pragma once

template<class Model>
class ICorrection {
public:
    virtual Model correct(Model model) = 0;
};
