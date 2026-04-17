#include "Person.h"
#include "Address.h"

Person::Person(std::string name)
{
    m_name = name;
}

void Person::setName(std::string name)
{
    m_name = name;
}

Address Person::getAddress()
{
    return (*m_addr);
}