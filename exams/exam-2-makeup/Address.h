#pragma once
#include <iostream>
#include <string>

class Address
{
    std::string m_street;
    std::string m_city;
    std::string m_state;

  public:
    // Constructors
    Address(std::string street, std::string city, std::string state);

    // Getters and Setters
    void setCity(std::string city);
    void setState(std::string state);
    void setStreet(std::string street);
};
