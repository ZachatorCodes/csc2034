#pragma once
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
    double m_basePay;

  public:
    virtual double getPaymentAmount() override;
    virtual std::string getClassName() override
    {
        return "Base Plus Commission Employee";
    }

    BasePlusCommissionEmployee();
    BasePlusCommissionEmployee(std::string fname, std::string lname, std::string ssnum, double comRate,
                               double grossSales, double basePay);

    double getBasePay();

    void setBasePay(double pay);

    virtual void print(std::ostream& out);
    friend std::ostream& operator<<(std::ostream& out, BasePlusCommissionEmployee& baseCompEmp);
};