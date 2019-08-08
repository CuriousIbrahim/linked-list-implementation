#include "iterator.h"

Iterator::Iterator(node *root)
{
    current = root;
}

bool Iterator::next()
{
    if ((*current).next == nullptr)
        return false;
    else
        current = (*current).next;

    return true;
}

int Iterator::get()
{
    return (*current).data;
}

void Iterator::update(int newData)
{
    (*current).data = newData;
}