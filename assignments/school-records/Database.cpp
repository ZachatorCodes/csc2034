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

        if (personData[0] == "Student")
        {
            Student student = Student(personData[1], personData[2], personData[3], personData[4], Status::Freshman);
            student.setStatus(personData[5]);
            people.push_back(student);
        }
    }
    file.close();

    return people;
}