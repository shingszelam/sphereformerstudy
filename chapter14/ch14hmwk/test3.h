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
    struct Node {T t; struct Node * next;};//链表 节点
    enum {Q_SIZE = 10};
    Node * front;
    Node * rear;
    int items;
    const int qsize;
    QueueTP(const QueueTP & qtp);
    QueueTP & operator = (const QueueTP & q) {return * this;}
public:
    QueueTP(int qs = Q_SIZE);
    ~QueueTP();
    bool isempty() const;
    bool isfully() const;
    int queuecount() const;
    bool enqueue(const T & t);
    bool dequeue(T & t);
};

template <class T>
QueueTP<>
#endif //CH14HMWK_TEST3_H
