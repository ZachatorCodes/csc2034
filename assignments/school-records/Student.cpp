#include "Student.h"

Student::Student() : Person(), m_status(Status::Freshman)
{
}

Student::Student(std::string name, std::string address, std::string phoneNumber, std::string emailAddress,
                 Status status)
    : Person(name, address, phoneNumber, emailAddress), m_status(status)
{
}

const Status& Student::getStatus() const
{
    return m_status;
}

void Student::setStatus(Status classStatus)
{
    m_status = classStatus;
}