#pragma once
#include "Shape.h"

class Quadrilateral : public Shape
{
    std::string name{};

public:
    Quadrilateral(std::string, bool);
};