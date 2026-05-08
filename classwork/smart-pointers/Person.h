#pragma once

#include "Address.h"
#include <iostream>
#include <memory> // needed for smart pointers
#include <string>

// Normally define functions in C++ file, not needed for example (time constraint)
class Person
{
    std::string m_name;
    int m_age;
    std::unique_ptr<Address> m_addr;

  public:
    Person(std::string name, int age) : m_name(name), m_age(age)
    {
        std::cout << "Person created" << std::endl;
    }

    ~Person()
    {
        std::cout << "Person destroyed" << std::endl;
    }

    std::string getName() const
    {
        return m_name;
    }

    void setAddress(std::unique_ptr<Address> addr)
    {
        // m_addr = addr; // error, cannot copy unique_ptr
        m_addr = std::move(addr);
    }

    friend std::ostream& operator<<(std::ostream& out, const Person& person)
    {
        out << person.m_name << ' ' << person.m_age << std::endl;
        return out;
    }
};