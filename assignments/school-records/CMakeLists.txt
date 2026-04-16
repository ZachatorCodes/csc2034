cmake_minimum_required(VERSION 3.10.0)
project(SchoolRecords VERSION 0.1.0 LANGUAGES C CXX)

add_executable(SchoolRecords main.cpp Person.cpp Student.cpp Employee.cpp Database.cpp Faculty.cpp Staff.cpp)

