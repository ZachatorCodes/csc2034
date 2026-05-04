#pragma once
#include "Person.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

class Database
{
    const std::string m_filePath = "../../../PersonDatabase.csv";
    std::ofstream m_file;

  public:
    Database();
    bool writePerson(Person* person);
    std::vector<Person> readDatabase();
};