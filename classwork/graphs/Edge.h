#pragma once

#include "Vertex.h"

template <typename K, typename E> class Edge
{
    E data;
    Vertex<K, E>* src;
    Vertex<K, E>* dest;

  public:
    Edge(Vertex<K, E>* source, Vertex<K, E>* destination, E data) : src(source), dest(destination), data(data)
    {
    }

    Vertex<K, E>* getSource() const
    {
        return src;
    }
    Vertex<K, E>* getDestination() const
    {
        return dest;
    }
    E& getData() const
    {
        return data;
    }

    template <typename U, typename V> friend std::ostream& operator<<(std::ostream&, Edge<U, V>&);
};