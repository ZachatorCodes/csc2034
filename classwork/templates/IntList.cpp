#include "IntList.h"
#include <iostream>

template <typename T> IntList<T>::Node::Node(T d) : data(d), next(nullptr), prev(nullptr)
{
    std::cout << "Creating node" << std::endl;
};

template <typename T> IntList<T>::Node::~Node()
{
    std::cout << "Destroying node" << std::endl;
}

template <typename T> IntList<T>::IntList() : head(nullptr), tail(nullptr), len(0)
{
}

template <typename T> IntList<T>::~IntList()
{
    clear();
}

// Copy Constructor
template <typename T> IntList<T>::IntList(const IntList& other) : IntList()
{
    for (auto cursor = other.head; cursor; cursor = cursor->next)
    {
        insert(cursor->data);
    }
}

template <typename T> void IntList<T>::insert(int num)
{
    IntList::Node* newNode = new Node(num);
    if (tail)
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    else
    {
        head = tail = newNode;
    }
    len++;
}

template <typename T> void IntList<T>::print() const
{
    for (auto cursor = head; cursor; cursor = cursor->next)
    {
        std::cout << cursor->data << ' ';
    }
    std::cout << '\n';
}

template <typename T> int IntList<T>::size() const
{
    return len;
}

template <typename T> void IntList<T>::clear()
{
    Node* cursor = head;
    while (cursor)
    {
        Node* next = cursor->next;
        delete cursor;
        cursor = next;
    }
    head = tail = nullptr;
    len = 0;
}