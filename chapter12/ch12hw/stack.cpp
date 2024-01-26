//
// Created by 77469 on 2024/1/23.
//
#include "stack.h"
#include <iostream>
#include <new>

Stack::Stack(int n )
{
    if (n < MAX)
    {
        size = n;
        pitems = new Item [size];
        top = size;
    }
    else
    {
        size=MAX;
        pitems = new Item [size];
        top = size;
    }
}

Stack::Stack(const Stack & st)
{
    delete [] pitems;
    size =st.size;
    pitems = new Item [st.size];
    pitems = st.pitems;
    top = st.top;
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top==0;
}

bool Stack::isfull() const
{
    return top ==MAX;
}

bool Stack::push(const Item &item)
{
    if (top<MAX)
    {
        pitems[top++] = item;
        return true;
    } else
        return false;
}

bool Stack::pop(Item &item)
{
    if (top>0)
    {
        item = pitems[--top];
        return true;
    } else
        return false;
}