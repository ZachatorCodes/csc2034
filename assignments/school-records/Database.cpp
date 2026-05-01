#include "Database.h"
#include "Faculty.h"

Database::Database() : m_file(m_filePath) {};

bool Database::writePerson(Person* person)
{
    if (Faculty* faculty = dynamic_cast<Faculty*>(person))
    {
        std::cout << faculty->getOfficeHours() << std::endl;
    }
    else if (Staff* staff = dynamic_cast<Staff*>(person))
    {
        std::cout << staff->getClassName() << std::endl;
    }
    else if (Student* student = dynamic_cast<Student*>(person))
    {
        std::cout << student->getClassName() << std::endl;
    }

    // m_file << '\"' << person->getName() << "\",\"" << person->getAddress() << "\",\"" << person->getPhoneNumber()
    //        << "\",\"" << person->getEmailAddress() << "\"\n";
    // m_file.close();

    return true;
}