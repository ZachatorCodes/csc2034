#pragma once

#include "IRepairable.h"
#include "Vehicle.h"

class Bike : public Vehicle, public IRepairable
{

    int m_wheelSize{ 29 };
    int m_frameSize{ 56 };

  public:
    Bike();
    ~Bike() override = default;

    std::string move() override;

    std::string repairIt() override;
};