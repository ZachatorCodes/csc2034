#include "Vehicle.h"

Vehicle::Vehicle() {}

void Vehicle::paintVehicle( std::string color )
{
    this->m_color = color;
}

std::string Vehicle::move()
{
    return "Push it!";
}
