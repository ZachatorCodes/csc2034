#include "Person.h"
#include "Address.h"

Person::Person(std::string name) : m_addr(nullptr)
{
    m_name = name;
}

Person::Person(Person& other)
{
    m_name = other.getName();
    m_addr = new Address(other.getAddress().getStreet(), other.getAddress().getCity(), other.getAddress().getState());
}

Person& Person::operator=(Person& other)
{
    m_name = other.getName();
    delete m_addr;
    m_addr = new Address(other.getAddress().getStreet(), other.getAddress().getCity(), other.getAddress().getState());
    return *this;
}

Person::~Person()
{
    delete m_addr;
}

std::string Person::getName()
{
    return m_name;
}

Address& Person::getAddress()
{
    return (*m_addr);
}

void Person::setName(std::string name)
{
    m_name = name;
}

void Person::setAddress(Address* addy)
{
    delete m_addr;
    m_addr = addy;
}

std::ostream& operator<<(std::ostream& out, Person person)
{
    out << person.m_name << ", " << *(person.m_addr);
    return out;
}
