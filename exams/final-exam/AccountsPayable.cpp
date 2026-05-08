#include "Employee.h"
#include "SalariedEmployee.h"
#include <iostream>

int main(int, char**)
{
    std::cout << "Hello, from AccountsPayable!\n";

    SalariedEmployee salEmp{SalariedEmployee("Zach", "Schwartz", "562756162", 1000.0)};

    std::cout << salEmp;
}
