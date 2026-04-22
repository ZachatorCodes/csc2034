#include "Shape.h"

#include <iostream>
#include <queue>
#include <set>

int main(int, char**)
{
    std::cout << "Hello World!" << std::endl;

    std::priority_queue<int> intQ;

    intQ.push(3);
    intQ.push(12);
    intQ.push(5);
    intQ.push(11);
    intQ.push(22);
    intQ.push(88);
    intQ.push(6);

    while (!intQ.empty())
    {
        std::cout << intQ.top() << " ";
        intQ.pop();
    }
    std::cout << std::endl;

    std::priority_queue<Shape, std::vector<Shape>, ShapeCompare> shapeQ;
    shapeQ.push(Shape("Red", 67));
    shapeQ.push(Shape("Yellow", 32));
    shapeQ.push(Shape("Green", 50));
    shapeQ.push(Shape("Violet", 89));
    shapeQ.push(Shape("Teal", 4));

    while (!shapeQ.empty())
    {
        std::cout << shapeQ.top() << " ";
        shapeQ.pop();
    }
    std::cout << std::endl;

    std::set<Shape, ShapeCompare> shapeSet;

    shapeSet.insert(Shape("Red", 67));
    shapeSet.insert(Shape("Yellow", 32));
    shapeSet.insert(Shape("Green", 50));
    shapeSet.insert(Shape("Violet", 89));
    shapeSet.insert(Shape("Teal", 4));

    for (const auto& elem : shapeSet)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
