#include "ConnectFour.h"
#include <iostream>

void ConnectFour::printBoard() const
{
    std::cout << "|1|2|3|4|5|6|7|" << '\n' << "---------------" << std::endl;
    for (const auto& row : m_board)
    {
        for (const auto& element : row)
        {
            std::cout << "|" << element;
        }
        std::cout << "|";
        std::cout << '\n';
    }
}