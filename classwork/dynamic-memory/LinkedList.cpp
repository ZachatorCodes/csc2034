#include <iostream>

struct Data
{
    int number;
};

struct Node
{
    Data *data;
    Node *next;

    ~Node()
    {
        delete data;
        std::cout << "Deleted data" << std::endl;
        std::cout << "Deleted node" << std::endl;
    }
};

struct LinkedList
{
    Node *head = nullptr;
    size_t count = 0;

    ~LinkedList()
    {
        Node *node = head;
        while (node)
        {
            Node *restOfList = node->next;
            delete node;
            node = restOfList;
        };
    }
};

LinkedList createList(int numElems)
{
    LinkedList ls{nullptr, 0};
    srand(time(nullptr));
    for (size_t i = 0; i < numElems; i++)
    {
        Node *node = new Node{nullptr, nullptr};
        Data *data = new Data{rand()};
        node->data = data;
        node->next = ls.head;
        ls.head = node;
        ls.count++;
    }
    return ls;
}

int main(int, char **)
{
    LinkedList list = createList(3);

    Node *node = list.head;
    while (node != nullptr)
    {
        std::cout << "Data: " << node->data->number << std::endl;
        node = node->next;
    }
}