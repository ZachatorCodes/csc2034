#pragma once
#include <string>

// Pragma does this all in one line
// #ifndef CAR_H
// #define CAR_H
// #endif (GOES AT VERY BOTTOM OF FILE)

class Car
{
private:
    std::string m_make; // member variable (m_XXX)
    std::string m_model;
    std::string m_vin;

public:
    Car();
    Car(std::string make, std::string model, std::string vin); // parameter names are optionals
    std::string getMake();
    std::string getModel();
    std::string getVin();
};