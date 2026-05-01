#include "Staff.h"

Staff::Staff() : Employee(), m_title("")
{
}

Staff::Staff(std::string name, std::string address, std::string phoneNumber, std::string emailAddress,
             std::string office, double salary, std::string dateHired, std::string title)
    : Employee(name, address, phoneNumber, emailAddress, office, salary, dateHired), m_title(title)
{
}

const std::string Staff::getTitle() const
{
    return m_title;
}

void Staff::setTitle(std::string title)
{
    m_title = title;
}

std::ostream& operator<<(std::ostream& out, const Staff& staff)
{
    out << staff << ",\"" << staff.getTitle() << "\"";
    return out;
}