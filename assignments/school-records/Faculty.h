#pragma once
#include "Employee.h"

enum class Rank
{
    Junior,
    Senior
};

class Faculty : public Employee
{
    Rank m_facultyRank;
    std::string m_officeHours;

  public:
    // Constructors
    Faculty();
    Faculty(std::string name, std::string address, std::string phoneNumber, std::string emailAddress,
            std::string office, double salary, std::string dateHired, std::string officeHours, Rank facultyRank);

    // Getters
    const std::string& getOfficeHours() const;
    const Rank& getFacultyRank() const;

    // Setters
    void setOfficeHours(std::string officeHours);
    void setFacultyRank(Rank facultyRank);
};