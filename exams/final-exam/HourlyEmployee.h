#pragma once
#include "Employee.h"

class HourlyEmployee : public Employee
{
    double m_hourlyWage;
    double m_hours;

  public:
    virtual double getPaymentAmount() override;
    virtual std::string getClassName() override
    {
        return "Hourly Employee";
    }

    HourlyEmployee();
    HourlyEmployee(std::string fname, std::string lname, std::string ssnum, double hrWage, double hrs);

    double getHourlyWage();
    double getHours();

    void setHourlyWage(double hrWage);
    void setHours(double hrs);

    void print(std::ostream& out) override;
    friend std::ostream& operator<<(std::ostream& out, HourlyEmployee& hrEmp);
};