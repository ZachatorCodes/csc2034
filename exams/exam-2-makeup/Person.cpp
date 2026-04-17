#include "Person.h"
#include "Address.h"

Person::Person(std::string name)
{
    m_name = name;
}

std::string Person::getName()
{
}

Address Person::getAddress()
{
    return (*m_addr);
}

void Person::setName(std::string name)
{
    m_name = name;
}
