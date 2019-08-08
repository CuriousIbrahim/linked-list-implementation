#include <iostream>

#include "linked-list.h"

LinkedList::LinkedList(int data)
{
    root = new node;

    (*root).data = data;
}

bool LinkedList::add(int data)
{
    node *current = root;

    while ((*current).next != nullptr)
    {
        current = (*current).next;
    }

    node *newNode = new node;

    (*newNode).data = data;

    (*current).next = newNode;

    return true;
}

void LinkedList::printAll()
{
    node *current = root;

    while (current != nullptr)
    {
        std::cout << (*current).data << std::endl;
        current = (*current).next;
    }
}

// testing purposes
int main()
{
    LinkedList yea(1);
    yea.add(2);
    yea.add(3);
    yea.add(4);
    yea.add(5);

    yea.printAll();

    return 0;
}
