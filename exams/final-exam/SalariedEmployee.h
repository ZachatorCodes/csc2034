#pragma once
#include "Employee.h"

class SalariedEmployee : public Employee
{
    double m_weeklySalary;

  public:
    virtual double getPaymentAmount() override;

    SalariedEmployee();
    SalariedEmployee(std::string fname, std::string lname, std::string ssNum, double weeklySalary);

    double getWeeklySalary();

    void setWeeklySalary(double salary);

    void print(std::ostream& out) override;
    friend std::ostream& operator<<(std::ostream& out, SalariedEmployee& salEmp);
};