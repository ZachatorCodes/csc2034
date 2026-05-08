#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee() : CommissionEmployee(), m_basePay(1.0)
{
}

BasePlusCommissionEmployee::BasePlusCommissionEmployee(std::string fname, std::string lname, std::string ssnum,
                                                       double comRate, double grossSales, double basePay)
    : CommissionEmployee(fname, lname, ssnum, comRate, grossSales), m_basePay(basePay)
{
}

double BasePlusCommissionEmployee::getPaymentAmount()
{
    return (CommissionEmployee::getPaymentAmount() + m_basePay);
}

double BasePlusCommissionEmployee::getBasePay()
{
    return m_basePay;
}

void BasePlusCommissionEmployee::setBasePay(double pay)
{
    m_basePay = pay;
}

void BasePlusCommissionEmployee::print(std::ostream& out)
{
    Employee::print(out);
    out << '\n'
        << "Gross Sales: " << CommissionEmployee::getGrossSales() << '\n'
        << "Commission Rate: " << CommissionEmployee::getCommissionRate() << '\n'
        << "Base Pay: " << m_basePay << '\n'
        << "Payment Amount: " << getPaymentAmount() << '\n';
}

std::ostream& operator<<(std::ostream& out, BasePlusCommissionEmployee& baseCompEmp)
{
    baseCompEmp.print(out);
    return out;
}