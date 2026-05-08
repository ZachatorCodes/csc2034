#include "CommissionEmployee.h"
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include <iostream>

int main(int, char**)
{
    SalariedEmployee salEmp{SalariedEmployee("Zach", "Schwartz", "562756162", 1000.0)};

    std::cout << salEmp << std::endl;

    CommissionEmployee comEmp{CommissionEmployee("Kishore", "Menezes", "54378928", 10.0, 32.0)};

    std::cout << comEmp << std::endl;

    HourlyEmployee hrEmp{HourlyEmployee("John", "Smith", "123456789", 22.0, 12.0)};

    std::cout << hrEmp << std::endl;
}
