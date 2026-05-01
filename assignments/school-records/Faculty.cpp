#include "Faculty.h"

Faculty::Faculty() : Employee(), m_officeHours(""), m_facultyRank(Rank::Junior)
{
}

Faculty::Faculty(std::string name, std::string address, std::string phoneNumber, std::string emailAddress,
                 std::string office, double salary, std::string dateHired, std::string officeHours, Rank facultyRank)
    : Employee(name, address, phoneNumber, emailAddress, office, salary, dateHired), m_officeHours(officeHours),
      m_facultyRank(facultyRank)
{
}

const Rank& Faculty::getFacultyRank() const
{
    return m_facultyRank;
}

const std::string& Faculty::getOfficeHours() const
{
    return m_officeHours;
}

void Faculty::setOfficeHours(std::string officeHours)
{
    m_officeHours = officeHours;
}

void Faculty::setFacultyRank(Rank facultyRank)
{
    m_facultyRank = facultyRank;
}