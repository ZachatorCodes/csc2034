#pragma once
#include <iostream>
#include <string>

class Address
{
    std::string m_street;
    std::string m_city;
    std::string m_state;

  public:
    Address(std::string street, std::string city, std::string state);
};
