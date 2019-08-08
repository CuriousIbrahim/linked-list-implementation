#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "iterator.h"

struct node
{
    int data{};
    node *next{};
};

class LinkedList
{
private:
    node *root;
    bool rootInitialized = false;

public:
    LinkedList(int data);
    LinkedList();
    bool add(int data);
    void printAll();
    Iterator createIterator();
};

#endif