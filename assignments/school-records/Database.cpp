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