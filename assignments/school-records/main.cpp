#include "Database.h"
#include "Faculty.h"
#include "Staff.h"
#include "Student.h"

// GET RID OF REFERENCES, DON'T RETURN REFERENCES
// Read about dangling references

int main(int, char**)
{
    // Create a new database object
    Database* database = new Database();

    // Create 2 students
    Student* student1 =
        new Student("Bunkle Spunkle", "123 Kitty Street", "555-123-4567", "bunkle.spunkle@email.com", Status::Freshman);
    Student* student2 =
        new Student("Mr. Smile", "4365 Happy Road", "555-555-5555", "mr.smile@email.com", Status::Sophomore);

    // Create 2 faculty members
    Faculty* faculty1 =
        new Faculty("Dr. Brain", "789 University Ave", "555-987-6543", "dr.brain@email.com", "Building A, Room 101",
                    75000.0, "01-15-2020", "M/W/F 9:00 AM - 12:00 PM", Rank::Senior);
    Faculty* faculty2 =
        new Faculty("Professor Gigglefits", "321 College Blvd", "555-111-2222", "professor.gigglefits@email.com",
                    "Building B, Room 202", 95000.0, "08-20-2018", "T/Th 1:00 PM - 4:00 PM", Rank::Junior);

    // Create 2 staff members
    Staff* staff1 = new Staff("Bell Jingles", "456 Work Street", "555-234-5678", "ms.jingles@email.com",
                              "Building C, Room 303", 60000.0, "03-10-2019", "Administrative Assistant");
    Staff* staff2 = new Staff("Michael Bichael", "789 Office Blvd", "555-345-6789", "mike.bike@email.com",
                              "Building D, Room 404", 65000.0, "11-01-2017", "Department Head");

    // Write to database
    database->writePerson(student1);
    database->writePerson(student2);
    database->writePerson(faculty1);
    database->writePerson(faculty2);
    database->writePerson(staff1);
    database->writePerson(staff2);

    std::vector<Person*> people = database->readDatabase();
}
