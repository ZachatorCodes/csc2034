#include "Person.h"

Person::Person() : m_name(""), m_address(""), m_phoneNumber(""), m_emailAddress("")
{
}

Person::Person(std::string name, std::string address, std::string phoneNumber, std::string emailAddress)
    : m_name(name), m_address(address), m_phoneNumber(phoneNumber), m_emailAddress(emailAddress)
{
}