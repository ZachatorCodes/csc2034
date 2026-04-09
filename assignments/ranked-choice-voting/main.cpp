#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int readVotes(const std::string filepath, std::vector<std::vector<std::string>>& data)
{
    // Replace "data.csv" with your file path
    std::string file_path = filepath;
    std::ifstream file(file_path); // Open the file in input mode

    if (!file.is_open())
    {
        std::cerr << "Error: Could not open the file " << file_path << std::endl;
        return 1;
    }

    std::string line;
    data.clear(); // Clear the data vector before reading new data

    // Read each line from the file
    while (std::getline(file, line))
    {
        std::stringstream ss(line); // Create a stringstream from the line
        std::string field;
        std::vector<std::string> row;

        // Parse each field in the line using a comma delimiter
        while (std::getline(ss, field, ','))
        {
            row.push_back(field);
        }
        data.push_back(row); // Add the row to the data storage
    }

    file.close(); // Close the file

    // Optional: Print the read data to verify
    for (const auto& row : data)
    {
        for (const auto& field : row)
        {
            std::cout << field << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}

int main(int, char**)
{
    std::string filepath = "../../../CandidateVotes.csv"; // Adjust the path as needed
    std::vector<std::vector<std::string>> data;           // vector to store the read data

    readVotes(filepath, data); // code runs in build directory, so path is relative to that
}
