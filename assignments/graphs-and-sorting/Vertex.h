#pragma once

#include <string>
#include <vector>

// Vertex represents a course node in the graph.
// It stores the course name, list of outgoing edges (by index), and in-degree count.
class Vertex
{
  private:
    std::string m_name;
    std::vector<int> m_outgoing;
    int m_inDegree;

  public:
    Vertex(const std::string& name) : m_name(name), m_outgoing(), m_inDegree(0)
    {
    }

    const std::string& name() const
    {
        return m_name;
    }

    const std::vector<int>& outgoing() const
    {
        return m_outgoing;
    }
    void addEdgeTo(int dstIndex)
    {
        m_outgoing.push_back(dstIndex);
    }

    int inDegree() const
    {
        return m_inDegree;
    }
    void incInDegree()
    {
        ++m_inDegree;
    }
    void decInDegree()
    {
        if (m_inDegree > 0)
        {
            --m_inDegree;
        }
    }
};
