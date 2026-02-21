#include <iostream>
#include <array>

// Template for 2D std::array (not C-style)
template <typename T, std::size_t Row, std::size_t Col>
using Array2D = std::array<std::array<T, Col>, Row>;

// Prototype for function with template parameter and no return type
template <typename T, std::size_t Row, std::size_t Col>
void print2DArray(const Array2D<T, Row, Col> &arr);

// Prototype for function with no parameter and template return type
template <typename T, std::size_t Row, std::size_t Col>
Array2D<T, Row, Col> buildBoard();

void printGameInfo();
void runGame();

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

    printGameInfo();
    print2DArray(board);
}

// Template parameter function
template <typename T, std::size_t Row, std::size_t Col>
void print2DArray(const Array2D<T, Row, Col> &arr)
{
    std::cout << '\n';
    std::cout << "|1|2|3|4|5|6|7|" << '\n' << "---------------" << std::endl;
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

void printGameInfo()
{
    std::cout << "--------------------------" << '\n'
              << "Welcome to Connect 4!" << '\n'
              << "First play to CONNECT FOUR PIECES wins!" << '\n'
              << "--------------------------" << std::endl;
}