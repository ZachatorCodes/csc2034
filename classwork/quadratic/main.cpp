#include <iostream>
#include <cmath>

std::pair<bool, std::pair<double, double>> solveQuadratic(double a, double b, double c);

int main(int, char **)
{
    double A;
    double B;
    double C;

    std::cout << "Hello, from quadratic!\n";

    std::cout << "Quadratic Formula:\n\n"
              << "(-b +/- root(b^2 - 4ac))\n-------------------------\n          2a" << std::endl;

    std::cout << "Enter a value for variable A: ";
    std::cin >> A;

    std::cout << "Enter a value for variable B: ";
    std::cin >> B;

    std::cout << "Enter a value for variable C: ";
    std::cin >> C;

    std::pair<bool, std::pair<double, double>> answer = solveQuadratic(A, B, C);
    std::cout << answer.first << " " << answer.second.first << " " << answer.second.second;
}

std::pair<bool, std::pair<double, double>> solveQuadratic(double a, double b, double c)
{
    std::pair<double, double> solutions;
    std::pair<bool, std::pair<double, double>> finalAnswer;

    double bSquare = b * b;
    double fourAC = 4 * a * c;

    if (bSquare - fourAC < 0)
    {
        finalAnswer.first = false;
        finalAnswer.second.first = 0;
        finalAnswer.second.second = 0;
        return finalAnswer;
    }
    else
    {
        double solOne = ((-1 * b) + std::sqrt(bSquare - fourAC)) / (2 * a);
        double solTwo = ((-1 * b) - std::sqrt(bSquare - fourAC)) / (2 * a);
        finalAnswer.first = true;
        finalAnswer.second.first = solOne;
        finalAnswer.second.second = solTwo;
        return finalAnswer;
    }
}