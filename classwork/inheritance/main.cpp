#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main(int, char**){
    std::cout << "Hello, from Inheritance!\n";

    Shape shape1{"Red", true};

    std::cout << shape1;

    Circle circle1{"Green", true, 2.0};

    std::cout << circle1;

    Rectangle rect1("Blue", false, 2, 3);
    std::cout << "Rect Color: " << rect1.getColor() << std::endl;
    std::cout << rect1;
}
