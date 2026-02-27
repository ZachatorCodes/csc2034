#include <iostream>
#include "IntList.h"

void test()
{
    IntList seq1, seq2;

    seq1.insert(10);
    seq1.insert(-2);
    seq1.insert(8);

    seq1.print();
}

int main(int, char **)
{
    std::cout << "Hello, from linked-list!\n";
    test();
}
