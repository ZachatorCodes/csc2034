#include "Database.h"
#include <iostream>

int main(int, char**)
{
    Database* database = new Database();
    database->writePerson(new Person("John Doe", "123 Main St", "555-1234", "john.doe@example.com"));
}
