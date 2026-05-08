#include "Employee.h"

Employee::Employee() : m_firstName("First Name"), m_lastName("Last Name"), m_ssNum("XXX-XX-XXXX")
{
}

Employee::Employee(std::string fname, std::string lname, std::string ssnum)
    : m_firstName(fname), m_lastName(lname), m_ssNum(ssnum)
{
}

std::string Employee::getFirstName()
{
    return m_firstName;
}

std::string Employee::getLastName()
{
    return m_lastName;
}

std::string Employee::getSSNum()
{
    return m_ssNum;
}

void Employee::setFirstName(std::string fname)
{
    m_firstName = fname;
}

void Employee::setLastName(std::string lname)
{
    m_lastName = lname;
}

void Employee::setSSNum(std::string ssNum)
{
    m_ssNum = ssNum;
}

void Employee::print(std::ostream& out)
{
    out << getClassName() << '\n'
        << "First Name: " << m_firstName << '\n'
        << "Last Name: " << m_lastName << '\n'
        << "SS Number: " << m_ssNum;
}

std::ostream& operator<<(std::ostream& out, Employee& emp)
{
    emp.print(out);
    return out;
}