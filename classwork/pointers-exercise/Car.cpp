#include "Car.h"

Car::Car()
{
}

Car::Car(std::string make, std::string model, std::string vin) : m_make(make), m_model(model), m_vin(vin)
{
}

std::string Car::getMake()
{
    return m_make; // inside class, don't need to use this keyword
}

std::string Car::getModel()
{
    return this->m_model; // (this is a pointer to the current object that you are in, must derefernce internal data)
}

std::string Car::getVin()
{
    return (*this).m_vin; // (*this is the object itself, it dereferences the object)
}