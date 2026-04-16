#pragma once
#include "Person.h"
#include <vector>

class Database
{
    const std::string m_filePath = "PersonDatabase.csv";

  public:
    Database();
    bool writePerson(Person person);
    std::vector<Person> readDatabase();
};