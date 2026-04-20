#pragma once

#include "Edge.h"
#include "Vertex.h"

#include <iostream>
#include <vector>

template <typename K, typename E> class Graph
{
    std::vector<Vertex<K, E>> vertices;

  public:
    Graph();
    bool addVertex(K key);
    bool addEdge(K src, K dst, E edgeData);
    Vertex<K, E>* findVertex(K key);
    Edge<K, E>* findEdge(K src, K dst, E data);
    void printGraph(); // Utility, print whole graph if needed.
};

#include "Graph.tpp"