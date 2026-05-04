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

std::vector<std::vector<std::string>> Database::readDatabase()
{
    std::ifstream file(m_filePath);
    std::string line;
    std::vector<std::vector<std::string>> people;

    while (std::getline(file, line))
    {
        std::stringstream ss(line); // Create a stringstream from the line
        std::string field;
        std::vector<std::string> row;

        // Parse each field in the line using a comma delimiter
        while (std::getline(ss, field, ','))
        {
            row.push_back(field);
        }
        people.push_back(row); // Add the row to the data storage
    }
    file.close();

    return people;
}