#pragma once
#include <string>

class Person
{
    std::string m_name;
    std::string m_address;
    std::string m_phoneNumber;
    std::string m_emailAddress;

  public:
    // Constructors
    Person();
    Person(std::string name, std::string address, std::string phoneNumber, std::string emailAddress);

    // Getters
    const std::string& getName() const;
    const std::string& getAddress() const;
    const std::string& getPhoneNumber() const;
    const std::string& getEmailAddress() const;
    virtual const std::string getClassName() const
    {
        return "Person";
    };

    // Setters
    void setName(std::string name);
    void setAddress(std::string address);
    void setPhoneNumber(std::string phoneNumber);
    void setEmailAddress(std::string emailAddress);
};