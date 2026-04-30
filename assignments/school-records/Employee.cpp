#include "Employee.h"

Employee::Employee() : Person(), m_office(""), m_dateHired(""), m_salary(0.0)
{
}

Employee::Employee(std::string name, std::string address, std::string phoneNumber, std::string emailAddress,
                   std::string office, double salary, std::string dateHired)
    : Person(name, address, phoneNumber, emailAddress), m_office(office), m_salary(salary), m_dateHired(dateHired)
{
}

const std::string& Employee::getOffice() const
{
    return m_office;
}

const std::string& Employee::getDateHired() const
{
    return m_dateHired;
}

double Employee::getSalary() const
{
    return m_salary;
}

void Employee::setOffice(std::string office)
{
    m_office = office;
}

void Employee::setDateHired(std::string dateHired)
{
    m_dateHired = dateHired;
}

void Employee::setSalary(double salary)
{
    m_salary = salary;
}