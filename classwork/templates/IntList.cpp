#include "IntList.h"
#include <iostream>

IntList::Node::Node(int n) : data(n), next(nullptr), prev(nullptr)
{
    std::cout << "Creating node" << std::endl;
};

IntList::Node::~Node()
{
    std::cout << "Destroying node" << std::endl;
}

IntList::IntList() : head(nullptr), tail(nullptr), len(0)
{
}

IntList::~IntList()
{
    clear();
}

// Copy Constructor
IntList::IntList(const IntList &other) : IntList()
{
    for (auto cursor = other.head; cursor; cursor = cursor->next)
    {
        insert(cursor->data);
    }
}

void IntList::insert(int num)
{
    IntList::Node *newNode = new Node(num);
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

void IntList::print() const
{
    for (auto cursor = head; cursor; cursor = cursor->next)
    {
        std::cout << cursor->data << ' ';
    }
    std::cout << '\n';
}

int IntList::size() const
{
    return len;
}

void IntList::clear()
{
    Node *cursor = head;
    while (cursor)
    {
        Node *next = cursor->next;
        delete cursor;
        cursor = next;
    }
    head = tail = nullptr;
    len = 0;
}