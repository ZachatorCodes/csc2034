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

    // Destructors
    ~Address();

    // Getters
    std::string getCity();
    std::string getState();
    std::string getStreet();

    // Setters
    void setCity(std::string city);
    void setState(std::string state);
    void setStreet(std::string street);
};
