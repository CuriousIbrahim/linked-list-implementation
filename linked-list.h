#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct node
{
    int data{};
    node *next{};
};

class LinkedList
{
private:
    node *root;

public:
    LinkedList(int data);
    bool add(int data);
    void printAll();
};

#endif