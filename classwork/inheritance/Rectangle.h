#pragma once
#include "Quadrilateral.h"
#include <iostream>

class Rectangle : public Quadrilateral
{
    int m_length{1};
    int m_breadth{1};

public:
    Rectangle(std::string, bool, int, int);
    int getArea();
    friend std::ostream& operator<<(std::ostream& out, Rectangle& rectangle);
    //"using" loosens permissions, if getColor was private then anything Rectangle can access could access it
    using Shape::getColor;
};