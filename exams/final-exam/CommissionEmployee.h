#pragma once
#include "Employee.h"

class CommissionEmployee : public Employee
{
    double m_commissionRate;
    double m_grossSales;

  public:
    virtual double getPaymentAmount() override;
    virtual std::string getClassName() override
    {
        return "Commission Employee";
    }

    CommissionEmployee();
    CommissionEmployee(std::string fname, std::string lname, std::string ssnum, double comRate, double grossSales);

    double getCommissionRate();
    double getGrossSales();

    void setComissionRate(double rate);
    void setGrossSales(double sales);

    virtual void print(std::ostream& out);
    friend std::ostream& operator<<(std::ostream& out, CommissionEmployee& comEmp);
};