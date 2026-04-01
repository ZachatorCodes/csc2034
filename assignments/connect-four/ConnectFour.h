#pragma once
#include <array>

class ConnectFour
{
    std::array<std::array<char, 7>, 6> m_board;
    char m_p1piece = 'R';
    char m_p2piece = 'Y';

  public:
    void printBoard() const;
};