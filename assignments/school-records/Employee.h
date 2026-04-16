#pragma once
#include "Person.h"

class Employee : public Person
{
    std::string m_office;
    std::string m_dateHired;
    double m_salary;

  public:
    Employee();
    Employee(std::string name, std::string address, std::string phoneNumber, std::string emailAddress,
             std::string office, double salary, std::string dateHired);
};
