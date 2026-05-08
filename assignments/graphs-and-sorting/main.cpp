#include "Graph.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

bool parseCourse(const std::string& line, std::string& courseName, std::vector<std::string>& prerequisites)
{
    std::stringstream ss(line);

    // Read the course name
    if (!(ss >> courseName))
    {
        return false; // Empty line or read error
    }

    // Read the number of prerequisites
    int numPrereqs;
    if (!(ss >> numPrereqs))
    {
        return false;
    }

    // Read the prerequisites
    prerequisites.clear();
    std::string prereq;
    int count = 0;
    while (ss >> prereq)
    {
        prerequisites.push_back(prereq);
        count++;
    }

    // Validate that the number of prerequisites matches what was specified
    if (count != numPrereqs)
    {
        return false;
    }

    return true;
}

int main(int argc, char* argv[])
{
    // Prompt user for filename
    std::string filename;
    std::cout << "Enter the name of the input file: ";
    std::cin >> filename;
    filename = "../../../" + filename;

    // Open the file for the first pass (reading nodes)
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Error: Could not open file '" << filename << "'." << std::endl;
        return 1;
    }

    // Read the number of courses
    int numCourses;
    if (!(file >> numCourses))
    {
        std::cerr << "Error: Could not read number of courses from file." << std::endl;
        file.close();
        return 1;
    }

    // Clear the newline character from the input buffer
    std::string dummy;
    std::getline(file, dummy);

    // First pass: Read all courses and add them as nodes to the graph
    Graph courseGraph;
    std::vector<std::pair<std::string, std::vector<std::string>>> courseData;

    for (int i = 0; i < numCourses; i++)
    {
        std::string line;
        if (!std::getline(file, line))
        {
            std::cout << "Error: Could not read course line " << (i + 1) << "." << std::endl;
            file.close();
            return 1;
        }

        // Skip empty lines
        if (line.empty())
        {
            i--;
            continue;
        }

        std::string courseName;
        std::vector<std::string> prerequisites;

        if (!parseCourse(line, courseName, prerequisites))
        {
            std::cout << "Error: Invalid format on line " << (i + 1) << ": " << line << std::endl;
            file.close();
            return 1;
        }

        // Add the course as a node
        if (!courseGraph.addNode(courseName))
        {
            std::cout << "Error: Duplicate course name '" << courseName << "'." << std::endl;
            file.close();
            return 1;
        }

        // Store the course data for the second pass
        courseData.push_back({courseName, prerequisites});
    }

    // Close the file to reopen it for the second pass
    file.close();

    // Second pass: Read all prerequisite edges and add them to the graph
    file.open(filename);
    if (!file.is_open())
    {
        std::cerr << "Error: Could not reopen file '" << filename << "'." << std::endl;
        return 1;
    }

    // Skip the number of courses line
    if (!(file >> numCourses))
    {
        std::cerr << "Error: Could not read number of courses on second pass." << std::endl;
        file.close();
        return 1;
    }
    std::getline(file, dummy);

    // Add edges for each course's prerequisites
    int courseIndex = 0;
    for (int i = 0; i < numCourses; i++)
    {
        std::string line;
        if (!std::getline(file, line))
        {
            std::cout << "Error: Could not read course line on second pass." << std::endl;
            file.close();
            return 1;
        }

        // Skip empty lines
        if (line.empty())
        {
            i--;
            continue;
        }

        std::string courseName;
        std::vector<std::string> prerequisites;
        parseCourse(line, courseName, prerequisites);

        // Add edges from each prerequisite to this course
        for (const auto& prereq : prerequisites)
        {
            // Check if the prerequisite course exists
            auto allCourses = courseGraph.getCourses();
            if (std::find(allCourses.begin(), allCourses.end(), prereq) == allCourses.end())
            {
                std::cout << "Error: Prerequisite '" << prereq << "' for course '" << courseName
                          << "' does not exist in the course list." << std::endl;
                file.close();
                return 1;
            }

            if (!courseGraph.addEdge(prereq, courseName))
            {
                std::cout << "Error: Could not add edge from '" << prereq << "' to '" << courseName << "'."
                          << std::endl;
                file.close();
                return 1;
            }
        }
    }

    // Close the file
    file.close();

    // sort the graph
    std::vector<std::string> ordering = courseGraph.topologicalSort();

    // Output results
    if (ordering.empty())
    {
        std::cout << "Courses are impossible to complete." << std::endl;
    }
    else
    {
        std::cout << "Topological ordering:" << std::endl;
        for (std::size_t i = 0; i < ordering.size(); ++i)
        {
            std::cout << (i + 1) << ". " << ordering[i] << std::endl;
        }
    }

    return 0;
}
