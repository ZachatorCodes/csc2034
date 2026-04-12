#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// PROTOTYPES ///////////////////////////////////////////////////////////////////////

int readInitialVoteData(const std::string filepath, std::vector<std::vector<std::string>>& data);
bool runAlgorithm(int* rankTally, const std::vector<std::vector<std::string>>& data);
void tallyVotes(int* rankTally, const std::vector<std::vector<std::string>>& data);
int writeData(const std::string filepath, const std::vector<std::vector<std::string>>& data);

////////////////////////////////////////////////////////////////////////////////////

// FUNCTION DEFINITIONS ///////////////////////////////////////////////////////////////////////

int readInitialVoteData(const std::string filepath, std::vector<std::vector<std::string>>& data)
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

    return 0;
}

bool runAlgorithm(int* rankTally, const std::vector<std::vector<std::string>>& data, int numOfCandidates)
{
    bool winner = false;
    int loserCandidate = -1;
    double totalVotes = data.size() - 1;
    const std::string ELECTION_RESULTS_CSV = "../../../ElectionResults.csv";

    while (!winner)
    {
        for (int i = 0; i < numOfCandidates; i++)
        {
            if (rankTally[i] / totalVotes > 0.5)
            {
                winner = true;
                break;
            }
        }
    }

    return winner;
}

void tallyVotes(int* rankTally, const std::vector<std::vector<std::string>>& data)
{
    for (int row = 1; row < data.size(); row++)
    {
        for (int col = 0; col < data[row].size(); col++)
        {
            if (data[row][col] == "5")
            {
                rankTally[col]++;
            }
        }
    }
}

int writeData(const std::string filepath, const std::vector<std::vector<std::string>>& data)
{
    int arraySize = data[0].size();      // Get the number of candidates from the header row
    int candidateVotes[arraySize] = {0}; // array to store the vote counts for each candidate

    std::ofstream file(filepath); // open the file in output mode

    // check if the file was opened successfully
    if (!file.is_open())
    {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    // Write the header for the file
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

    for (int row = 1; row < data.size(); row++)
    {
        for (int col = 0; col < data[row].size(); col++)
        {
            if (data[row][col] == "5")
            {
                candidateVotes[col]++; // Increment the vote count for the candidate
            }
        }
    }

    for (int i = 0; i < arraySize; i++)
    {
        if (i == arraySize - 1)
        {
            file << candidateVotes[i] << '\n'; // Write the vote count for the last candidate
        }
        else
        {
            file << candidateVotes[i] << ','; // Write the vote count for the current candidate followed by a comma
        }
    }

    // close the file
    file.close();
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////

int main(int, char**)
{
    // CSV FILE PATHS
    const std::string CANDIDATE_VOTES_CSV = "../../../CandidateVotes.csv";
    const std::string ELECTION_RESULTS_CSV = "../../../ElectionResults.csv";

    std::vector<std::vector<std::string>> data;     // vector to store voting data
    readInitialVoteData(CANDIDATE_VOTES_CSV, data); // store initial data into the vector of vectors

    // Create an array to store the talley for all votes
    int arraySize = data[0].size();
    int rankTally[arraySize] = {0};

    bool winner = runAlgorithm(rankTally, data);
}
