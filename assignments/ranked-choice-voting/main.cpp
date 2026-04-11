#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// PROTOTYPES
int readData(const std::string filepath, std::vector<std::vector<std::string>>& data);
int writeData(const std::string filepath, const std::vector<std::vector<std::string>>& data, int iteration);

// FUNCTION DEFINITIONS
int readData(const std::string filepath, std::vector<std::vector<std::string>>& data)
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
    // for (const auto& row : data)
    // {
    //     for (const auto& field : row)
    //     {
    //         std::cout << field << "\t";
    //     }
    //     std::cout << std::endl;
    // }

    return 0;
}

int writeData(const std::string filepath, const std::vector<std::vector<std::string>>& data, int iteration)
{
    std::ofstream file(filepath); // open the file in output mode

    // check if the file was opened successfully
    if (!file.is_open())
    {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    // Write the header for the file
    file << "Canidates,";
    for (int i = 0; i < data[0].size(); i++)
    {
        if (i == data[0].size() - 1)
        {
            file << data[0][i] << '\n';
        }
        else
        {
            file << data[0][i] << ',';
        }
    }

    // close the file
    file.close();
    return 0;
}

int main(int, char**)
{
    std::string initialVotes = "../../../CandidateVotes.csv"; // original path to the CSV file
    std::string results = "../../../ElectionResults.csv";     // file path for tallied results
    std::vector<std::vector<std::string>> data;               // vector to store the read data

    readData(initialVotes, data); // code runs in build directory, so path is relative to that
    writeData(results, data, 0);
}
