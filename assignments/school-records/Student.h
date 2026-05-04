#pragma once
#include "Person.h"
#include <algorithm>

enum class Status
{
    Freshman,
    Sophomore,
    Junior,
    Senior
};

class Student : public Person
{

    Status m_status;

  public:
    // Constructors
    Student();
    Student(std::string name, std::string address, std::string phoneNumber, std::string emailAddress, Status m_status);

    // Getters
    const std::string getStatus() const;
    const std::string getClassName() const override
    {
        return "Student";
    };

    // Setters
    void setStatus(Status classStatus);
    void setStatus(std::string classStatus);

    // Operator Overload / Helper Functions
    friend std::ostream& operator<<(std::ostream& out, const Student& student);
    void print(std::ostream& out) const override;
};