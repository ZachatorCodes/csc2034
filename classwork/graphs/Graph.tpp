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
    out << "(" << *(e.src) << ", " << *(e.dest) << ", " << e.data << ")";

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
    auto neighbors = newEdge->getSource()->getNeighbors();
    neighbors->push_back(*newEdge);
    return true;
}

template <typename K, typename E>
Vertex<K, E>* Graph<K, E>::findVertex(K key)
{
    Vertex<K, E> vert{key};
    auto it = std::find(vertices.begin(), vertices.end(), vert); // find uses == so it must be overriden in vertex
    if (it != vertices.end())
    {
        // int index = std::distance(vertices.begin(), it);
        // return &vertices[index];
        return &(*it);
    }
    return nullptr;
}

template <typename K, typename E>
Edge<K, E>* Graph<K, E>::findEdge(K src, K dst, E data)
{
    Vertex<K, E>* srcV = findVertex(src);
    Vertex<K, E>* dstV = findVertex(dst);

    if (!srcV || !dstV)
    {
        return nullptr;
    }

    Edge<K, E> edge{srcV, dstV, data};
    auto it = std::find(srcV->getNeighbors()->begin(), srcV->getNeighbors()->end(), edge);
    if (it != srcV->getNeighbors()->end())
    {
        // int eIndex = std::distance(srcV->getNeighbors()->begin(), it);
        // return &srcV->getNeighbors()->at(eIndex);
        return &(*it);
    }
    return nullptr;
}

template <typename K, typename E>
bool Vertex<K, E>::operator==(const Vertex<K, E>& other)
{
    if (key == other.key)
    {
        return true;
    }
    return false;
}

template <typename K, typename E>
bool Edge<K, E>::operator==(const Edge<K, E>& other)
{
    if (src == other.src && dest == other.dest)
    {
        return true;
    }
    return false;
}

template <typename K, typename E>
void Graph<K, E>::printGraph()
{
    for (int i = 0; i < vertices.size(); i++)
    {
        Vertex curV = vertices.at(i);
        std::cout << curV << ":";
        std::vector<Edge<K, E>>* neighbors = curV.getNeighbors();
        for (Edge<K, E>& edge : *neighbors)
        {
            std::cout << " " << edge;
        }
        std::cout << std::endl;
    }
}