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
