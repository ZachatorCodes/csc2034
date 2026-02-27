#include "IntList.h"
#include <iostream>

IntList::Node::Node(int n) : data(n), next(nullptr), prev(nullptr)
{
    std::cout << "Creating node" << std::endl;
};

IntList::IntList() : head(nullptr), tail(nullptr), len(0)
{
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