#pragma once
#include <string>

class Person
{
    std::string m_name;
    std::string m_address;
    std::string m_phoneNumber;
    std::string m_emailAddress;

  public:
    Person();
    Person(std::string name, std::string address, std::string phoneNumber, std::string emailAddress);
};