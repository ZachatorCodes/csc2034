#include "Calculator.h"
#include "IntList.h"
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

    Calculator<int, double> intCalc;
    std::cout << intCalc.add(8, 2) << std::endl;

    IntList<double> seq1;
    seq1.insert(2.5);
    seq1.insert(3.7);
    seq1.insert(4.2);
    seq1.print();

    IntList<Calculator<int, double>> seq2;
    seq2.insert(intCalc);
}
