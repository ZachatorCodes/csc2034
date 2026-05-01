#pragma once
#include "Person.h"

class Employee : public Person
{
    std::string m_office;
    std::string m_dateHired;
    double m_salary;

  public:
    // Constructors
    Employee();
    Employee(std::string name, std::string address, std::string phoneNumber, std::string emailAddress,
             std::string office, double salary, std::string dateHired);

    // Getters
    const std::string getOffice() const;
    const std::string getDateHired() const;
    double getSalary() const;
    virtual const std::string getClassName() const
    {
        return "Employee";
    };

    // Setters
    void setOffice(std::string office);
    void setDateHired(std::string dateHired);
    void setSalary(double salary);
};
