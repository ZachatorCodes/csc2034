#include "Address.h"

Address::Address(std::string street, std::string city, std::string state)
{
    m_street = street;
    m_city = city;
    m_state = state;
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