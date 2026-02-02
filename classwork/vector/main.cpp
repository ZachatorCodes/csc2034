#include <iostream>
#include <vector>

int main(int, char **)
{
    std::cout << "Hello, from vector!\n";

    // Empty vector (ArrayList in Java)
    std::vector<int> v1;

    // Either option works
    std::vector<int> v2{1, 2, 3}; // Better for list / vector values
    std::vector<int> v3 = {1, 2, 3};

    int num{5};
    int num2 = 5; // Better format for scalar values

    for (int i = 0; i < v2.size(); i++)
    {
        // std::cout << v2[i] << " ";
        std::cout << v2.at(i) << " ";
    }
    std::cout << std::endl; // endl is a line ending character

    // For each loop
    for (int x : v2)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
