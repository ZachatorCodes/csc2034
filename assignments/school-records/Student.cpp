#include "Student.h"

Student::Student() : Person(), m_status(Status::Freshman)
{
}

Student::Student(std::string name, std::string address, std::string phoneNumber, std::string emailAddress,
                 Status status)
    : Person(name, address, phoneNumber, emailAddress), m_status(status)
{
}

const std::string Student::getStatus() const
{
    if (m_status == Status::Freshman)
    {
        return "Freshman";
    }
    else if (m_status == Status::Sophomore)
    {
        return "Sophomore";
    }
    else if (m_status == Status::Junior)
    {
        return "Junior";
    }
    else if (m_status == Status::Senior)
    {
        return "Senior";
    }
    else
    {
        return "Unknown";
    }
}

void Student::setStatus(Status classStatus)
{
    m_status = classStatus;
}

std::ostream& operator<<(std::ostream& out, const Student& student)
{
    out << student << ",\"" << student.getStatus() << "\"";
    return out;
}

void Student::print(std::ostream& out) const
{
    Person::print(out);
    out << ",\"" << getStatus() << '"';
}