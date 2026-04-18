#pragma once
#include "Person.h"

class Student : public Person
{
    enum status
    {
        Freshman,
        Sophomore,
        Junior,
        Senior
    };
    status m_status;

  public:
    Student();
    Student(std::string name, std::string address, std::string phoneNumber, std::string emailAddress, status m_status);
};