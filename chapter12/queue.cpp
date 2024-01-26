//
// Created by 77469 on 2024/1/21.
//
#include <cstdlib>
#include "queue.h"

Queue::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
}

Queue::~Queue()
{
    Node * temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isempty() const
{
    return items==0;
}

bool Queue::isfull() const
{
    return items==qsize;
}

int Queue::queuecount() const
{
    return items;
}

//将条目增加到队列中
bool Queue::enqueue(const Item &item)
{
    if (isfull())
        return false;
    Node * add = new Node;
    add->item= item;
    add->next = NULL;
    items++;
    if (front == NULL)
        front =add;
    else
        rear->next = add;
    rear = add;
    return true;
}

//从最前面的条目移除
bool Queue::dequeue(Item &item)
{
    if (front == NULL)
        return false;
    item = front->item;
    items--;
    Node * temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear = NULL;
    return true;
}

void Customer::set(long when)
{
    processtime = std::rand() % 3 +1;
    arrive = when;
}