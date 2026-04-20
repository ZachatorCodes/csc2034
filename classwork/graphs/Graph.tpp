// #include "Graph.h" // don't need when includeing in graph.h

// Vertex print function
template <typename K, typename E>
std::ostream& operator<<(std::ostream& out, Vertex<K, E>& v)
{
    out << v.key;
    return out;
}
// Edge print function
template <typename K, typename E>
std::ostream& operator<<(std::ostream& out, Edge<K, E>& e)
{
    out << "(" << *(e.src) << ", " << *(e.dest) << ", " << e.data << ")" << std::endl;

    return out;
}

template <typename K, typename E>
Graph<K, E>::Graph()
{
}

template <typename K, typename E>
bool Graph<K, E>::addVertex(K key)
{
    if (findVertex(key))
    {
        return false;
    }
    Vertex<K, E>* newVertex = new Vertex<K, E>(key);
    vertices.push_back(*newVertex);
    return true;
}

template <typename K, typename E>
bool Graph<K, E>::addEdge(K src, K dst, E edgeData)
{
    if (findEdge(src, dst, edgeData))
    {
        return false;
    }
    Edge<K, E>* newEdge = new Edge<K, E>(findVertex(src), findVertex(dst), edgeData);
    auto neighbors = newEdge->getSource()->neighbors;
    neighbors->push_back(*newEdge);
    return true;
}

template <typename K, typename E>
Vertex<K, E>* Graph<K, E>::findVertex(K key)
{
    Vertex<K, E>* vert{key};
    auto it = std::find(vertices.begin(), vertices.end(), vert); // find uses == so it must be overriden in vertex
    if (it != vertices.end())
    {
        // int index = std::distance(vertices.begin(), it);
        // return &vertices[index];
        return &(*it);
    }
    return nullptr;
}