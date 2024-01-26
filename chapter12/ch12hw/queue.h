//
// Created by 77469 on 2024/1/24.
//

#ifndef CHAPTER12_QUEUE_H
#define CHAPTER12_QUEUE_H
class Customer
{
private:
    long arrive;
    int processtime;
public:
    Customer() {arrive = processtime = 0;};
    void set(long when);
    long when() const {return arrive;};
    int ptime() const {return processtime;}
};

typedef Customer Item;

class Queue
{
private:
    struct Node {Item item; struct Node * next;};
    enum {Q_SIZE = 10};
    Node * front;
    Node * rear;
    int items;
    const int qsize;
    //预定义复制和赋值
    Queue(const Queue & q);
    Queue & operator=(const Queue & q) {return *this;};
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item & item);
    bool dequeue( Item & item);

    friend bool operator>(const Queue & q1, const Queue & q2);
    friend bool operator<(const Queue & q1, const Queue & q2);
    //friend bool operator=(const Queue & q1, const Queue & q2);
};
#endif //CHAPTER12_QUEUE_H
