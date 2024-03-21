//
// Created by 77469 on 2024/3/12.
//

#ifndef CH14HMWK_TEST3_H
#define CH14HMWK_TEST3_H

#include <iostream>


template <class T>
class QueueTP
{
private:
    T item;
    struct Node {T item; struct Node * next;};//链表 节点
    enum {Q_SIZE = 10};
    Node * front;
    Node * rear;
    int items;
    const int qsize;
    //QueueTP(const QueueTP & qtp);
    //QueueTP & operator = (const QueueTP & q) {return * this;}
public:
    QueueTP(int qs = Q_SIZE);
    ~QueueTP();
    bool isempty() const;
    bool isfully() const;
    int queuecount() const;
    bool enqueue(const T & item);
    bool dequeue(T & item);
};

template <class T>
QueueTP<T>::QueueTP(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
}

template <class T>
QueueTP<T>::~QueueTP()
{
    Node * temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template <class T>
bool QueueTP<T>::isempty() const
{
    return items ==0;
}

template <class T>
bool QueueTP<T>::isfully() const
{
    return items == qsize;
}

template <class T>
int QueueTP<T>::queuecount() const
{
    return items;
}

template <class T>
bool QueueTP<T>::enqueue(const T &item)
{
    if (isfully())
        return false;
    Node * add = new Node;
    add->item = item;
    add->next = NULL;
    items++;
    if (front == NULL)
        front = add;
    else
        rear->next = add;
    rear = add;
    return true;
}
//网络上答案
/**bool QueueTP<T>::enqueue(const T &item)
{
    if (isfully())
        return false;
    Node * add = new Node;
    if (front == NULL)
    {
        add->item = item;
        add->next = nullptr;
        front = rear =add;
    } else
    {
        add->item = item;
        add->next = nullptr;
        rear->next = add;
        rear = add;
    }
    items++;
    return true;
}***/

template <class T>
bool QueueTP<T>::dequeue(T &item)
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


#endif //CH14HMWK_TEST3_H
