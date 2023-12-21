//
// Created by 77469 on 2023/12/20.
//
#include <iostream>
#include "8.h"
using namespace std;

List::List()
{
    top = 0;
}

bool List::ismin() const
{
    return top ==0;
}

bool List::ismax() const
{
    return top==MAX;
}
bool List::add(const Item &item)
{
    if(top< MAX)
    {
        items[top++] = item;
        return true;
    } else
        return false;
}

void List::visit(void (*pf)(Item & item))
{
    for (int i = 0; i < top; i++)
    {
        pf(items[i]);
    }
}


void List::show() const
{
    for(int i = 0; i < top; i++)
    {
        cout << "第" << i+1 << ": " << items[i] << std::endl;
    }
}

void p(Item & item)
{
    item +=100;
}