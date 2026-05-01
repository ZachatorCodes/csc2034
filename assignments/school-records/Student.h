#pragma once
#include "Person.h"

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
    const Status& getStatus() const;

    // Setters
    void setStatus(Status classStatus);
};