#pragma once
#include "Address.h"
#include <iostream>
#include <string>

class Person
{
    std::string m_name;
    Address* m_addr;

  public:
    // Constructors
    Person(std::string name);

    // Getters
    Address getAddress();
    std::string getName();

    // Setters
    void setAddress(Address* addy);
    void setName(std::string name);
};
