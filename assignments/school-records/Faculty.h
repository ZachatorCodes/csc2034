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
    const std::string getOfficeHours() const;
    const std::string getFacultyRank() const;
    const std::string getClassName() const override
    {
        return "Faculty";
    };

    // Setters
    void setOfficeHours(std::string officeHours);
    void setFacultyRank(Rank facultyRank);

    // Operator Overload
    friend std::ostream& operator<<(std::ostream& out, const Faculty& faculty);
};