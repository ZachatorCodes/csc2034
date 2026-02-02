#include <iostream>
#include <vector>
#include <algorithm>

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

    // Traversing a vector
    // --------------------------------

    // For loop
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

    // --------------------------------

    // Inserting things into vetor
    // --------------------------------

    // Initialize new character vector
    std::vector<char> vc{'b', 'c', 'a'};

    // Insert into vector
    vc.push_back('e');

    for (auto x : vc)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    vc.insert(vc.begin(), 'f');
    for (auto x : vc)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    vc.insert(vc.begin() + 3, 'w');
    for (auto x : vc)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // Remove very last element
    vc.pop_back();

    // Remove element at index 3
    vc.erase(vc.begin() + 3);

    // Remove a particular element (find)
    vc.erase(std::find(vc.begin(), vc.end(), 'b'));

    if (!vc.empty())
    {
        std::cout << "List is not empty" << std::endl;
    }

    for (auto x : vc)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
