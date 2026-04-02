#pragma once

#include <string>
class Vehicle
{

    std::string m_color{ "Grey" };
    bool m_hasEngine{ false };

  public:
    Vehicle();
    virtual ~Vehicle() = default;  // Always remember virtual destructor

    void paintVehicle( std::string color );
    virtual std::string move() = 0;
};
