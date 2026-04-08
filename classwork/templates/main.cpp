#include <iostream>

// int add(int a, int b)
// {
//     return a + b;
// }

// double add(double a, double b)
// {
//     return a + b;
// }

template <typename T> T add(T a, T b)
{
    return a + b;
}

// this template returns whatever the second parameter is, in this case V
template <typename T, typename V> V add(T a, V b)
{
    return a + b;
}

int main(int, char**)
{
    std::cout << add(2, 3) << std::endl;

    std::cout << add(2.5, 3.7) << std::endl; // heads up, no warning if not overloaded

    std::cout << add(2, 3.7) << std::endl;

    std::cout << add(3.7, 2) << std::endl;
}
