#pragma once
#include <iostream>
#include <string>

class Employee
{
    std::string m_firstName;
    std::string m_lastName;
    std::string m_ssNum;

  public:
    virtual double getPaymentAmount() = 0; // pure virtual function (abstract class)
    virtual std::string getClassName()
    {
        return "Employee";
    }

    Employee();
    Employee(std::string fname, std::string lname, std::string ssnum);

    std::string getFirstName();
    std::string getLastName();
    std::string getSSNum();

    void setFirstName(std::string fname);
    void setLastName(std::string lname);
    void setSSNum(std::string ssNum);

    virtual void print(std::ostream& out);
    friend std::ostream& operator<<(std::ostream& out, Employee& emp);
};