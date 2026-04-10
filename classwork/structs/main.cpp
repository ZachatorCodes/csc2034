#include <iostream>

struct Name
{
    std::string fname;
    std::string lname;
};

struct ID
{
    Name name;
    unsigned long long snumber; // usigned means that number cannot be negative, doubles positive range
    std::string favAnimal;
};

struct PID
{
    std::pair<std::string, std::string> name;
    unsigned long long snumber; // usigned means that number cannot be negative, doubles positive range
    std::string favAnimal;
};

ID createID(std::string fname, std::string lname, unsigned long long sId, std::string animal);
PID createPID(std::string fname, std::string lname, unsigned long long sId, std::string animal);
std::tuple<std::string, std::string, std::string> getMeetingInfo();

int main(int, char**)
{
    std::cout << "Hello, from structs!\n";
    ID newId = createID("John", "Wick", 1234567, "Cat");
    std::cout << "Name: " << newId.name.fname << " " << newId.name.lname << "\nSNum: " << newId.snumber
              << "\nFav Animal: " << newId.favAnimal << std::endl;

    PID newPID = createPID("Wohn", "Jick", 1234567, "Dog");
    std::cout << "Name: " << newPID.name.first << " " << newPID.name.second << "\nSNum: " << newPID.snumber
              << "\nFav Animal: " << newPID.favAnimal << std::endl;

    auto meetInfo = getMeetingInfo();
    std::cout << "The meeting is in building " << std::get<0>(meetInfo) << " class " << std::get<1>(meetInfo) << " at "
              << std::get<2>(meetInfo) << std::endl;
}

ID createID(std::string fname, std::string lname, unsigned long long sId, std::string animal)
{
    // Name name = {fname, lname}; BAD PRACTICE - Becomes a copy constructor
    Name name{fname, lname}; // GOOD PRACTICE - Creates struct directly
    ID id{name, sId, animal};
    return id;
}

PID createPID(std::string fname, std::string lname, unsigned long long sId, std::string animal)
{
    // Name name = {fname, lname}; BAD PRACTICE - Becomes a copy constructor
    std::pair<std::string, std::string> name{fname, lname}; // GOOD PRACTICE - Creates struct directly
    PID id{name, sId, animal};
    return id;
}

std::tuple<std::string, std::string, std::string> getMeetingInfo()
{
    std::string buildingName{"Blanca Peak"};
    std::string className{"BP112"};
    std::string time{"12:00pm"};
    return {buildingName, className, time};
}