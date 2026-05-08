#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include <algorithm>
#include <vector>

void printEmployee(Employee& emp)
{
    std::cout << emp << std::endl;
}

int main(int, char**)
{
    std::vector<Employee*> payableEmployees;

    HourlyEmployee* hourlyEmp = new HourlyEmployee("John", "Smith", "123456789", 22.0, 12.0);

    SalariedEmployee* salariedEmp = new SalariedEmployee("Zach", "Schwartz", "562756162", 1000.0);

    CommissionEmployee* commissionEmp = new CommissionEmployee("Kishore", "Menezes", "54378928", 10.0, 32.0);

    BasePlusCommissionEmployee* basePlusCommissionEmp =
        new BasePlusCommissionEmployee("Bob", "Black", "847387572", 50.0, 2.0, 100.0);

    payableEmployees.push_back(hourlyEmp);
    payableEmployees.push_back(salariedEmp);
    payableEmployees.push_back(commissionEmp);
    payableEmployees.push_back(basePlusCommissionEmp);

    std::cout << "Unsorted / Unmodified Data\n" << std::endl;
    for (Employee* employee : payableEmployees)
    {
        printEmployee(*employee);
        BasePlusCommissionEmployee* bsPlsEmp = dynamic_cast<BasePlusCommissionEmployee*>(employee);
        if (bsPlsEmp != nullptr)
        {
            bsPlsEmp->setBasePay(1.10 * bsPlsEmp->getBasePay());
        }
    }

    std::sort(payableEmployees.begin(), payableEmployees.end(),
              [](Employee* a, Employee* b) { return a->getPaymentAmount() > b->getPaymentAmount(); });

    std::cout << "Sorted and Modified Data\n" << std::endl;
    for (Employee* employee : payableEmployees)
    {
        printEmployee(*employee);
    }
}
