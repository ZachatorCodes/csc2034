cmake_minimum_required(VERSION 3.10.0)
project(AccountsPayable VERSION 0.1.0 LANGUAGES C CXX)

add_executable(AccountsPayable AccountsPayable.cpp Employee.cpp SalariedEmployee.cpp ComissionEmployee.cpp HourlyEmployee.cpp BasePlusCommissionEmployee.cpp)

