#pragma once

template <typename T, typename V> class Calculator
{
  public:
    V add(T a, V b)
    {
        return a + b;
    }

    double divide(T a, T b)
    {
        return a / b;
    }
};