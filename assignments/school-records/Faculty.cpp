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

const std::string Faculty::getFacultyRank() const
{
    if (m_facultyRank == Rank::Junior)
    {
        return "Junior";
    }
    else if (m_facultyRank == Rank::Senior)
    {
        return "Senior";
    }
    else
    {
        return "Unknown";
    }
}

const std::string Faculty::getOfficeHours() const
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

void Faculty::setFacultyRank(std::string facultyRank)
{
    std::transform(facultyRank.begin(), facultyRank.end(), facultyRank.begin(), ::tolower);

    if (facultyRank == "junior")
    {
        m_facultyRank = Rank::Junior;
    }
    else if (facultyRank == "senior")
    {
        m_facultyRank = Rank::Senior;
    }
}

std::ostream& operator<<(std::ostream& out, const Faculty& faculty)
{
    faculty.print(out);
    return out;
}

void Faculty::print(std::ostream& out) const
{
    Employee::print(out);
    out << ",\"" << getOfficeHours() << "\",\"" << getFacultyRank() << "\"";
}