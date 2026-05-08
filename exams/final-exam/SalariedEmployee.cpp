#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee() : Employee(), m_weeklySalary(1000.0)
{
}

SalariedEmployee::SalariedEmployee(std::string fname, std::string lname, std::string ssNum, double weeklySalary)
    : Employee(fname, lname, ssNum), m_weeklySalary(weeklySalary)
{
}

double SalariedEmployee::getPaymentAmount()
{
    return m_weeklySalary;
}

void SalariedEmployee::setWeeklySalary(double salary)
{
    m_weeklySalary = salary;
}

void SalariedEmployee::print(std::ostream& out)
{
    Employee::print(out);
    out << '\n' << "Weekly Salary: " << m_weeklySalary;
}

std::ostream& operator<<(std::ostream& out, SalariedEmployee& salEmp)
{
    salEmp.print(out);
    return out;
}