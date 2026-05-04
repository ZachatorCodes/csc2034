#include "Database.h"
#include "Faculty.h"
#include "Staff.h"
#include "Student.h"

Database::Database() : m_file(m_filePath) {};

bool Database::writePerson(Person* person)
{
    m_file << *person << std::endl;
    return true;
}

std::vector<Person> Database::readDatabase()
{
    std::ifstream file(m_filePath);
    std::string line;
    std::vector<Person> people;

    while (std::getline(file, line))
    {
        std::stringstream ss(line); // Create a stringstream from the line
        std::string personField;
        std::vector<std::string> personData;

        // Parse each field in the line using a comma delimiter
        while (std::getline(ss, personField, ','))
        {
            personData.push_back(personField.substr(1, personField.size() - 2)); // Remove the quotes
        }
    }
    file.close();

    return people;
}