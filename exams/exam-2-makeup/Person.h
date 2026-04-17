#pragma once
#include "Address.h"
#include <iostream>
#include <string>

// RULE OF 3:
// The moment you need a destructor,
// you probably need an assignment operator,
// a copy constructor,
// and an assignment overload

class Person
{
    std::string m_name;
    Address* m_addr;

  public:
    // Constructors
    Person(std::string name);

    // Destructors
    ~Person();

    // Getters
    Address getAddress();
    std::string getName();

    // Setters
    void setAddress(Address* addy);
    void setName(std::string name);

    // Friends
    friend std::ostream& operator<<(std::ostream& out, Person person);
};
