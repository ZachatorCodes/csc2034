#pragma once

#include "Vehicle.h"
#include "IRepairable.h"

class Car : public Vehicle, public IRepairable
{

    int numWheels{4};

  public:
    Car();
    Car(std::string color, bool hasEngine);
    ~Car() override = default;

    std::string move() override;

    std::string repairIt() override;
};