#include <iostream>
#include <array>

void print(int a)
{
    std::cout << "Value: " << a << std::endl;
}

int main(int, char **)
{
    int x{4}; // int x = 4;
    
    int &y{x}; // int& y = x;

    std::cout << x << ' ' << y << std::endl;

    x = 8;

    std::cout << x << ' ' << y << std::endl;

    int z = 98;

    print(z);
}