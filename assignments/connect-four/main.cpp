#include <iostream>
#include <array>

// Template for 2D std::array (not C-style)
template <typename T, std::size_t Row, std::size_t Col>
using Array2D = std::array<std::array<T, Col>, Row>;

// Prototype for function with template parameter
template <typename T, std::size_t Row, std::size_t Col>
void print2DArray(const Array2D<T, Row, Col> &arr);

int main(int, char **)
{
    Array2D<char, 6, 7> board{{
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
    }};

    print2DArray(board);
}

// Template parameter function
template <typename T, std::size_t Row, std::size_t Col>
void print2DArray(const Array2D<T, Row, Col> &arr)
{
    std::cout << '\n';
    for (const auto &row : arr)
    {
        for (const auto &element : row)
        {
            std::cout << "|" << element;
        }
        std::cout << "|";
        std::cout << '\n';
    }
}