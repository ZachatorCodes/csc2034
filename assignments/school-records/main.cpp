#include "Database.h"
#include "Faculty.h"
#include "Staff.h"
#include "Student.h"

int main(int, char**)
{
    // Create a new database object
    Database* database = new Database();
    database->writePerson(new Person("John Doe", "123 Main St", "555-1234", "john.doe@example.com"));
}
