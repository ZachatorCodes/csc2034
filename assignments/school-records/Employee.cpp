#include "Employee.h"

Employee::Employee() : Person(), m_office(""), m_dateHired(""), m_salary(0.0)
{
}

Employee::Employee(std::string name, std::string address, std::string phoneNumber, std::string emailAddress,
                   std::string office, double salary, std::string dateHired)
    : Person(name, address, phoneNumber, emailAddress), m_office(office), m_salary(salary), m_dateHired(dateHired)
{
}