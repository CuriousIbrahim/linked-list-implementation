#include <iostream>

#include "linked-list.h"

LinkedList::LinkedList()
{
    root = new node;
}

LinkedList::LinkedList(int data)
{
    length++;

    root = new node;

    (*root).index = length - 1;
    (*root).data = data;

    rootInitialized = true;
}

bool LinkedList::add(int data)
{
    length++;

    node *current = root;

    // if root is empty
    if (!rootInitialized)
    {
        (*current).index = length - 1;
        (*current).data = data;
        return true;
    }

    while ((*current).next != nullptr)
    {
        current = (*current).next;
    }

    node *newNode = new node;

    (*newNode).index = length - 1;
    (*newNode).data = data;

    (*current).next = newNode;

    return true;
}

int LinkedList::get(int index)
{
    node *current = root;

    while ((*current).next != nullptr)
    {
        if ((*current).index == index)
            return (*current).data;

        current = (*current).next;
    }

    return -1;
}

void LinkedList::remove(int index)
{

    length--;

    node *current = root;

    std::cout << "root index is " << (*current).index << " and length is " << length << std::endl;

    if (index == 0 && length > index)
    {
        node *toDelete = current;

        root = (*current).next;

        delete toDelete;

        LinkedList::decrementIndexesFrom(root);

        return;
    }

    while ((*current).next != nullptr || (*(*current).next).index == index)
    {
        current = (*current).next;
    }

    // case 1: last element
    if ((*(*current).next).next == nullptr)
    {
        delete (*current).next;

        (*current).next = nullptr;
    }
    // case 2: in between nodes
    else
    {
        node *toDelete = (*current).next;

        (*current).next = (*toDelete).next;

        delete toDelete;

        LinkedList::decrementIndexesFrom((*current).next);
    }
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

void LinkedList::decrementIndexesFrom(node *from)
{
    node *current = from;

    while (current != nullptr)
    {
        (*current).index--;
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

    yea.remove(0);

    yea.remove(0);

    yea.printAll();

    return 0;
}
