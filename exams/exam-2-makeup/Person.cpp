#include "Person.h"
#include "Address.h"

Person::Person(std::string name)
{
    m_name = name;
}

std::string Person::getName()
{
    return m_name;
}

Address Person::getAddress()
{
    return (*m_addr);
}

void Person::setName(std::string name)
{
    m_name = name;
}

void Person::setAddress(Address* addy)
{
    m_addr = addy;
}

std::ostream& operator<<(std::ostream& out, Person person)
{
    out << person.m_name << ", " << person.m_addr->getStreet() << ", " << person.m_addr->getCity() << ", "
        << person.m_addr->getState();
    return out;
}
