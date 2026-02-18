#include <iostream>

double gDoubArr[4]{};

void foo()
{
    static int sint{ 0 };
    
    sint += 1;
    std::cout << "Value of static var: " << sint << std::endl;
}