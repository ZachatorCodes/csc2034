#include "Person.h"

Person::Person() : m_name(""), m_address(""), m_phoneNumber(""), m_emailAddress("")
{
}

Person::Person(std::string name, std::string address, std::string phoneNumber, std::string emailAddress)
    : m_name(name), m_address(address), m_phoneNumber(phoneNumber), m_emailAddress(emailAddress)
{
}

const std::string& Person::getName() const
{
    return m_name;
}

const std::string& Person::getAddress() const
{
    return m_address;
}

const std::string& Person::getPhoneNumber() const
{
    return m_phoneNumber;
}

const std::string& Person::getEmailAddress() const
{
    return m_emailAddress;
}