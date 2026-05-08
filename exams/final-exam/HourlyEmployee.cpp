#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee() : Employee(), m_hourlyWage(22.0), m_hours(12.0)
{
}

HourlyEmployee::HourlyEmployee(std::string fname, std::string lname, std::string ssnum, double hrWage, double hrs)
    : Employee(fname, lname, ssnum), m_hourlyWage(hrWage), m_hours(hrs)
{
}

double HourlyEmployee::getPaymentAmount()
{
    return (getHourlyWage() * getHours());
}

double HourlyEmployee::getHourlyWage()
{
    return m_hourlyWage;
}

double HourlyEmployee::getHours()
{
    return m_hours;
}

void HourlyEmployee::setHourlyWage(double hrWage)
{
    m_hourlyWage = hrWage;
}

void HourlyEmployee::setHours(double hrs)
{
    m_hours = hrs;
}

void HourlyEmployee::print(std::ostream& out)
{
    Employee::print(out);
    out << '\n'
        << "Hourly Wage: " << m_hourlyWage << '\n'
        << "Hours: " << m_hours << '\n'
        << "Payment Amount: " << getPaymentAmount() << '\n';
}

std::ostream& operator<<(std::ostream& out, HourlyEmployee& hrEmp)
{
    hrEmp.print(out);
    return out;
}