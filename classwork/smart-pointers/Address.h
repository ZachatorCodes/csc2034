#pragma once

#include <string>

class Address
{
    std::string m_street;
    std::string m_city;
    std::string m_state;

  public:
    Address(std::string street, std::string city, std::string state) : m_street(street), m_city(city), m_state(state)
    {
    }
};