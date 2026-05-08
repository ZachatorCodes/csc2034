#include "Graph.h"
#include <queue>

int Graph::findCourseIndex(const std::string& courseName) const
{
    for (int i = 0; i < static_cast<int>(m_vertices.size()); i++)
    {
        if (m_vertices[i].name() == courseName)
        {
            return i;
        }
    }
    return -1; // Course not found
}

Graph::Graph() : m_vertices(), m_edges()
{
}

bool Graph::addNode(const std::string& courseName)
{
    if (findCourseIndex(courseName) != -1)
    {
        return false; // Course already exists
    }

    m_vertices.push_back(Vertex(courseName));

    return true;
}

bool Graph::addEdge(const std::string& prerequisite, const std::string& course)
{
    // Find indices of both courses
    int prereqIndex = findCourseIndex(prerequisite);
    int courseIndex = findCourseIndex(course);

    // Check if both courses exist in the graph
    if (prereqIndex == -1 || courseIndex == -1)
    {
        return false; // One or both courses don't exist
    }

    // Check if this edge already exists
    for (int edge : m_vertices[prereqIndex].outgoing())
    {
        if (edge == courseIndex)
        {
            return false; // Edge already exists
        }
    }

    // Add the edge record
    m_edges.push_back(Edge(prereqIndex, courseIndex));

    // Update vertex structures
    m_vertices[prereqIndex].addEdgeTo(courseIndex);
    m_vertices[courseIndex].incInDegree();

    return true;
}

std::vector<std::string> Graph::topologicalSort()
{
    std::vector<std::string> ordering;

    std::vector<int> tempInDegree;
    for (const auto& vertex : m_vertices)
    {
        tempInDegree.push_back(vertex.inDegree());
    }

    // Add all nodes with in-degree 0
    std::vector<int> activeSet;
    for (int i = 0; i < m_vertices.size(); i++)
    {
        if (tempInDegree[i] == 0)
        {
            activeSet.push_back(i);
        }
    }

    while (!activeSet.empty())
    {
        // Move a node N from the active set to the ordering
        int iterator = activeSet.front();
        activeSet.erase(activeSet.begin());
        ordering.push_back(m_vertices[iterator].name());

        // For each edge coming out of N and into M
        for (int M : m_vertices[iterator].outgoing())
        {
            tempInDegree[M]--;

            // If M now has no edges coming into it, add it to the active set
            if (tempInDegree[M] == 0)
            {
                activeSet.push_back(M);
            }
        }
    }

    if (ordering.size() != m_vertices.size())
    {
        return std::vector<std::string>(); // empty on fail (cycle)
    }

    // Otherwise, return the topological ordering
    return ordering;
}

// Getter for all courses
std::vector<std::string> Graph::getCourses() const
{
    std::vector<std::string> names;
    for (const auto& v : m_vertices)
    {
        names.push_back(v.name());
    }
    return names;
}
