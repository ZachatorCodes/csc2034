#pragma once
#include "Employee.h"

class Faculty : public Employee
{
    enum rank
    {
        Junior,
        Senior
    };
    rank m_facultyRank;
    std::string m_officeHours;

  public:
    // Constructors
    Faculty();
    Faculty(std::string name, std::string address, std::string phoneNumber, std::string emailAddress,
            std::string office, double salary, std::string dateHired, std::string officeHours, rank facultyRank);

    // Getters
    const std::string& getOfficeHours() const;
    const rank& getFacultyRank() const;

    // Setters
    void setOfficeHours(std::string officeHours);
    void setFacultyRank(rank facultyRank);
};