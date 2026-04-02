#pragma once
#include <string>
#include "IRepairable.h"

class Phone: public IRepairable {
    double screenSize{4.0};

    public:
    std::string repairIt() override;
};