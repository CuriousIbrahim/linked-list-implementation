#ifndef ITERATOR_H
#define ITERATOR_H

#include "linked-list.h"

class Iterator
{
private:
    node *current;

public:
    Iterator(node *root);
    bool next();
    int get();
    int update(int newData);
};

#endif