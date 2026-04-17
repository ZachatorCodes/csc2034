#include "Address.h"

Address::Address(std::string street, std::string city, std::string state)
{
    m_street = street;
    m_city = city;
    m_state = state;
}

Address::~Address()
{
}

std::string Address::getCity()
{
    return m_city;
}

std::string Address::getState()
{
    return m_state;
}

std::string Address::getStreet()
{
    return m_street;
}

void Address::setCity(std::string city)
{
    m_city = city;
}

void Address::setState(std::string state)
{
    m_state = state;
}

void Address::setStreet(std::string street)
{
    m_street = street;
}