#pragma once
#include "Employee.h"

class Staff : public Employee
{
    std::string m_title;

  public:
    // Constructors
    Staff();
    Staff(std::string name, std::string address, std::string phoneNumber, std::string emailAddress, std::string office,
          double salary, std::string dateHired, std::string title);

    // Getters
    const std::string getTitle() const;
    const std::string getClassName() const override
    {
        return "Staff";
    };

    // Setters
    void setTitle(std::string title);
};