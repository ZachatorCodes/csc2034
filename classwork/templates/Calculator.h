#pragma once

template <typename T, typename V> class Calculator
{
  public:
    T add(T a, V b);
    double divide(T a, T b);
};

#include "Calculator.tpp"