#pragma once

// Edge is a simple record of a directed edge between vertex indices
class Edge
{
  private:
    int m_src;
    int m_dst;

  public:
    Edge(int src, int dst) : m_src(src), m_dst(dst)
    {
    }
    int src() const
    {
        return m_src;
    }
    int dst() const
    {
        return m_dst;
    }
};
