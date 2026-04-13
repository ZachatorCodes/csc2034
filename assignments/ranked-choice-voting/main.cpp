#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// PROTOTYPES ///////////////////////////////////////////////////////////////////////

int readInitialVoteData(const std::string filepath, std::vector<std::vector<std::string>>& data);
bool runAlgorithm(std::vector<std::vector<std::string>>& data);
void tallyVotes(std::vector<int>& rankTally, const std::vector<std::vector<std::string>>& data);
int writeData(std::ofstream& file, const std::vector<int>& rankTally);

////////////////////////////////////////////////////////////////////////////////////

// FUNCTION DEFINITIONS ///////////////////////////////////////////////////////////////////////

int readInitialVoteData(const std::string filepath, std::vector<std::vector<std::string>>& data)
{
    std::ifstream file(filepath); // Open the file in input mode

    if (!file.is_open())
    {
        std::cerr << "Error: Could not open the file " << filepath << std::endl;
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

bool runAlgorithm(std::vector<std::vector<std::string>>& data)
{
    const std::string ELECTION_RESULTS_CSV = "../../../ElectionResults.csv";
    std::ofstream file(ELECTION_RESULTS_CSV); // Open the file in input mode

    if (!file.is_open())
    {
        std::cerr << "Error opening file" << std::endl;
        return false;
    }

    // Add candidate names to the first row of the output file
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

    const double totalVotes = data.size() - 1;

    bool winner = false;
    while (!winner)
    {
        int numOfCandidates = data[0].size();
        std::vector<int> rankTally(numOfCandidates, 0);
        tallyVotes(rankTally, data);

        std::cout << "Candidate vote counts: ";
        for (int i = 0; i < numOfCandidates; i++)
        {
            std::cout << data[0][i] << ": " << rankTally[i] << " | ";
        }
        std::cout << std::endl;

        writeData(file, rankTally);

        for (int i = 0; i < numOfCandidates; i++)
        {
            if (rankTally[i] / totalVotes > 0.5)
            {
                winner = true;
                break;
            }
        }

        int minVoteCandidateIndex = 0;
        for (int i = 1; i < numOfCandidates; i++)
        {
            if (rankTally[i] < rankTally[minVoteCandidateIndex])
            {
                minVoteCandidateIndex = i;
            }
        }

        // Adjust ranks: shift down for eliminated candidate, remove their column
        for (int row = 1; row < data.size(); row++)
        {
            // For all candidates ranked lower than eliminated one, decrease their rank by 1
            for (int col = 0; col < data[row].size(); col++)
            {
                if (col != minVoteCandidateIndex)
                {
                    int rankInt = std::stoi(data[row][col]);
                    if (rankInt > std::stoi(data[row][minVoteCandidateIndex]))
                    {
                        rankInt--;
                        data[row][col] = std::to_string(rankInt);
                    }
                }
            }
        }

        // Remove the eliminated candidate's column from all rows
        for (int row = 0; row < data.size(); row++)
        {
            data[row].erase(data[row].begin() + minVoteCandidateIndex);
        }
    }

    file.close();
    return winner;
}

void tallyVotes(std::vector<int>& rankTally, const std::vector<std::vector<std::string>>& data)
{
    // Reset tally counts to 0
    std::fill(rankTally.begin(), rankTally.end(), 0);

    for (int row = 1; row < data.size(); row++)
    {
        for (int col = 0; col < data[row].size(); col++)
        {
            if (data[row][col] == "1")
            {
                rankTally[col]++;
            }
        }
    }
}

int writeData(std::ofstream& file, const std::vector<int>& rankTally)
{
    for (int i = 0; i < rankTally.size(); i++)
    {
        if (i == rankTally.size() - 1)
        {
            file << rankTally[i] << '\n'; // Write the vote count for the last candidate
        }
        else
        {
            file << rankTally[i] << ','; // Write the vote count for the current candidate followed by a comma
        }
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////

int main(int, char**)
{
    // CSV FILE PATHS
    const std::string CANDIDATE_VOTES_CSV = "../../../CandidateVotes.csv";

    std::vector<std::vector<std::string>> data;     // vector to store voting data
    readInitialVoteData(CANDIDATE_VOTES_CSV, data); // store initial data into the vector of vectors

    bool winner = runAlgorithm(data);
}
