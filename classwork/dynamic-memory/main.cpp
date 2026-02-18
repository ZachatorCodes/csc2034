#include "foo.cpp"
#include <iterator>

int gArr[] = {1, 3, 0, 4, 5};

/**
 * @class IArray
 * @brief Integer Array
 */
struct IArray
{
    int *array;
    size_t size;
};

int main(int, char **)
{
    // std::cout << "Hello World!" << std::endl;

    // int arr[] = {1, 2, 3, 4, 5};

    // size_t length = 5;
    // int *dArr1 = new int[1000000]{};
    // dArr1[0] = 3;

    // delete[] dArr1; // Must delete variables created with 'new' or 'new[]'
    // for (int i = 0; i < 4; i++)
    // {
    //     foo();
    // }

    // int bigArr[1000]{};

    // // Some simple stuff with main
    // int arr1[] = {1, 2, 3};
    // IArray arr2 = {arr1, 3};

    // IArray arr3{new int[]{1, 2, 3}, 3};
    // IArray arr4 = {new int[]{1, 2, 3}, 3}; // SAME
    // delete[] arr4.array;

    int a = 8;
    int* b = &a;
    int &c = *b;
    std::cout << "Address: " << b << std::endl;
    std::cout << "Pointer: " << *b << std::endl;
    std::cout << "Pointer: " << &c << std::endl;
}
