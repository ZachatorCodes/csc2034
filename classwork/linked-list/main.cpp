#include <iostream>
#include "IntList.h"

void test()
{
    IntList seq1; // create list

    seq1.insert(10);
    seq1.insert(-2);
    seq1.insert(8);
    seq1.print();

    IntList seq2{seq1}; // SHALLOW COPY

    seq2.print();
    seq2.insert(23);
    std::cout << "After insert" << std::endl;
    seq2.print();
    seq1.print();
    std::cout << seq2.size() << " " << seq1.size() << std::endl;
}

int main(int, char **)
{
    std::cout << "Hello, from linked-list!\n";
    test();
}
