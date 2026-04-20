#include "Student.h"

Student::Student() : Person(), m_status(Freshman)
{
}

Student::Student(std::string name, std::string address, std::string phoneNumber, std::string emailAddress,
                 enum status m_status)
    : Person(name, address, phoneNumber, emailAddress), m_status(m_status)
{
}

const Student::status& Student::getStatus() const
{
    return m_status;
}

void Student::setStatus(status classStatus)
{
    m_status = classStatus;
}