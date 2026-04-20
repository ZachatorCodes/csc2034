// #include "Graph.h" // don't need when includeing in graph.h

// Vertex print function
template <typename K, typename E> std::ostream& operator<<(std::ostream& out, Vertex<K, E>& v)
{
    out << v.key;
    return out;
}
// Edge print function
template <typename K, typename E> std::ostream& operator<<(std::ostream& out, Edge<K, E>& e)
{
    out << "(" << *(e.src) << ", " << *(e.dest) << ", " << e.data << ")" << std::endl;

    return out;
}

template <typename K, typename E> Graph<K, E>::Graph()
{
}

template <typename K, typename E> bool Graph<K, E>::addVertex(K key)
{
    if (findVertex(key))
    {
        return false;
    }
    Vertex<K, E>* newVertex = new Vertex<K, E>(key);
    vertices.push_back(*newVertex);
    return true;
}