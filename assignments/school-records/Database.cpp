#include "Database.h"
#include "Faculty.h"

Database::Database() : m_file(m_filePath) {};

bool Database::writePerson(Person* person)
{
    Faculty* faculty = (dynamic_cast<Faculty*>(person));
    std::cout << person->getClassName() << std::endl;

    // m_file << '\"' << person->getName() << "\",\"" << person->getAddress() << "\",\"" << person->getPhoneNumber()
    //        << "\",\"" << person->getEmailAddress() << "\"\n";
    // m_file.close();

    return true;
}