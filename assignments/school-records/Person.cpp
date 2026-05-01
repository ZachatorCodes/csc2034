#include "Person.h"

Person::Person() : m_name(""), m_address(""), m_phoneNumber(""), m_emailAddress("")
{
}

Person::Person(std::string name, std::string address, std::string phoneNumber, std::string emailAddress)
    : m_name(name), m_address(address), m_phoneNumber(phoneNumber), m_emailAddress(emailAddress)
{
}

const std::string Person::getName() const
{
    return m_name;
}

const std::string Person::getAddress() const
{
    return m_address;
}

const std::string Person::getPhoneNumber() const
{
    return m_phoneNumber;
}

const std::string Person::getEmailAddress() const
{
    return m_emailAddress;
}

void Person::setName(std::string name)
{
    m_name = name;
}

void Person::setAddress(std::string address)
{
    m_address = address;
}

void Person::setPhoneNumber(std::string phoneNumber)
{
    m_phoneNumber = phoneNumber;
}

void Person::setEmailAddress(std::string emailAddress)
{
    m_emailAddress = emailAddress;
}

std::ostream& operator<<(std::ostream& out, const Person& person)
{
    out << '\"' << person.getClassName() << "\",\"" << person.getName() << "\",\"" << person.getAddress() << "\",\""
        << person.getPhoneNumber() << "\",\"" << person.getEmailAddress() << "\"\n";
    return out;
}