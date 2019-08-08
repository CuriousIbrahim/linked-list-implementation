#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "iterator.h"

struct node
{
    int index{};
    int data{};
    node *next{};
};

class LinkedList
{
private:
    node *root;
    int length = 0;
    bool rootInitialized = false;
    void decrementIndexesFrom(node *node);

public:
    LinkedList(int data);
    LinkedList();
    bool add(int data);
    int get(int index);
    void remove(int index);
    void printAll();
    Iterator createIterator();
};

#endif