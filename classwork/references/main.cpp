#include <iostream>
#include <array>

int main(int, char **)
{
    std::cout << "Hello, from references!\n";

    // C-style array
    // int cArr[] = {1, 2, 3};
    int cArr[]{1, 2, 3};

    // C++ class for array
    std::array<int, 3> sArr{1, 2, 3};
}
