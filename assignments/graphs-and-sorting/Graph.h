#pragma once

#include "Edge.h"
#include "Vertex.h"
#include <string>
#include <vector>

class Graph
{
    std::vector<Vertex> m_vertices;
    std::vector<Edge> m_edges;
    int findCourseIndex(const std::string& courseName) const;

  public:
    // Constructor
    Graph();

    // Add nodes and edges
    bool addNode(const std::string& courseName);
    bool addEdge(const std::string& prerequisite, const std::string& course);

    // Sort
    std::vector<std::string> topologicalSort();

    // Get all courses
    std::vector<std::string> getCourses() const;
};
