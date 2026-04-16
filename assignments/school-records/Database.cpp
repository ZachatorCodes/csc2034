#include "Database.h"
#include <fstream>
#include <iostream>
#include <sstream>

Database::Database()
{
    std::ofstream file("../../../" + m_filePath);
};