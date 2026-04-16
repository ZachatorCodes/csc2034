#pragma once
#include "Employee.h"

class Faculty : public Employee
{
    std::string m_officeHours;
    enum rank
    {
        Junior,
        Senior
    };

  public:
    Faculty();
    Faculty(std::string name, std::string address, std::string phoneNumber, std::string emailAddress,
            std::string office, double salary, std::string dateHired, std::string officeHours, rank facultyRank);
};