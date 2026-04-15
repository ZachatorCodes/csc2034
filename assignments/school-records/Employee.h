#pragma once
#include "Person.h"
#include <ctime>

class Employee : public Person
{
    std::string m_office;
    double m_salary;
    std::time_t m_dateHired;

  public:
    Employee();
    Employee(std::string name, std::string address, std::string phoneNumber, std::string emailAddress,
             std::string office, double salary, std::time_t dateHired);
};
