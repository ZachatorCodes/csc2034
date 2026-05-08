#pragma once
#include "Employee.h"

class SalariedEmployee : public Employee
{
    double m_weeklySalary;

  public:
    virtual double getPaymentAmount() override;
    virtual std::string getClassName() override
    {
        return "Salaried Employee";
    }

    SalariedEmployee();
    SalariedEmployee(std::string fname, std::string lname, std::string ssNum, double weeklySalary);

    double getWeeklySalary();

    void setWeeklySalary(double salary);

    void print(std::ostream& out) override;
    friend std::ostream& operator<<(std::ostream& out, SalariedEmployee& salEmp);
};