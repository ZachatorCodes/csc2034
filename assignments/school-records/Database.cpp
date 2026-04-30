#include "Database.h"

Database::Database() : m_file(m_filePath) {};

bool Database::writePerson(Person* person)
{
    m_file << '\"' << person->getName() << "\",\"" << person->getAddress() << "\",\"" << person->getPhoneNumber()
           << "\",\"" << person->getEmailAddress() << "\"\n";
    m_file.close();

    return true;
}