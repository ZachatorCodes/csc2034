#include <iostream>

#include "Graph.h"

int main(int, char**)
{
    std::cout << "Hello World!" << std::endl;

    Graph<int, int> graph;

    graph.addVertex(0);
    graph.addVertex(1);
    graph.addVertex(2);
    graph.addVertex(3);
    graph.addVertex(4);
    graph.addVertex(5);

    int edges[18][3] = {{0, 1, 5}, {0, 2, 6}, {1, 0, 5}, {1, 2, 2}, {1, 5, 3}, {2, 0, 6},
                        {2, 1, 2}, {2, 3, 8}, {3, 2, 8}, {3, 4, 7}, {4, 3, 7}, {4, 5, 4},
                        {5, 1, 3}, {5, 4, 4}, {0, 3, 1}, {3, 0, 1}, {1, 4, 9}, {4, 1, 9}};

    for (auto& edge : edges)
    {
        graph.addEdge(edge[0], edge[1], edge[2]);
    }

    graph.printGraph();
}
