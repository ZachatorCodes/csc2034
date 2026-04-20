#pragma once
#include <vector>

template <typename K, typename E>
class Edge;

template <typename K, typename E>
class Vertex
{
    K key;
    std::vector<Edge<K, E>>* neighbors{};

  public:
    Vertex(K k) : key(k)
    {
        neighbors = new std::vector<Edge<K, E>>;
    }

    std::vector<Edge<K, E>>* getNeighbors() const
    {
        return neighbors;
    }

    template <typename U, typename V>
    friend std::ostream& operator<<(std::ostream& out, Vertex<U, V>& v);

    bool operator==(const Vertex<K, E>& other);
};