#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee() : Employee(), m_commissionRate(1.0), m_grossSales(1.0)
{
}

CommissionEmployee::CommissionEmployee(std::string fname, std::string lname, std::string ssnum, double comRate,
                                       double grossSales)
    : Employee(fname, lname, ssnum), m_commissionRate(comRate), m_grossSales(grossSales)
{
}

double CommissionEmployee::getPaymentAmount()
{
    return (getCommissionRate() * getGrossSales());
}

double CommissionEmployee::getCommissionRate()
{
    return m_commissionRate;
}

double CommissionEmployee::getGrossSales()
{
    return m_grossSales;
}

void CommissionEmployee::setComissionRate(double rate)
{
    m_commissionRate = rate;
}

void CommissionEmployee::setGrossSales(double sales)
{
    m_grossSales = sales;
}

void CommissionEmployee::print(std::ostream& out)
{
    Employee::print(out);
    out << '\n'
        << "Gross Sales: " << m_grossSales << '\n'
        << "Commission Rate: " << m_commissionRate << '\n'
        << "Payment Amount: " << getPaymentAmount() << '\n';
}

std::ostream& operator<<(std::ostream& out, CommissionEmployee& comEmp)
{
    comEmp.print(out);
    return out;
}