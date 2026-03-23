#pragma once
#include "Shape.h"

class Circle : public Shape {
    double m_radius{1.0};

public:
    double getArea();
    Circle(std::string color, bool filled, double radius);

    friend std::ostream& operator<<(std::ostream& out, Circle& circle);
};