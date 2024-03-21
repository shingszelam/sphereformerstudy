//
// Created by 77469 on 2024/3/12.
//
#include "work.h"
#include "test3.h"
#include <iostream>
#include <cstring>

const int SIZE = 3;
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::strchr;

    int count = 0;
    QueueTP<Worker> q(SIZE) ; //要将woker头文件部分中的虚函数/纯虚函数注释掉 不然会显示它为抽象类
    Worker * pWorker = new Worker[SIZE];
    pWorker[0] = Worker("Jack", 00001);
    pWorker[1] = Worker("Susan", 00002);
    pWorker[2] = Worker("Jerry", 00003);

    while (q.queuecount()< SIZE)
    {
        pWorker[count].Show();
        q.enqueue(pWorker[count]);
        count ++;
    }

    if (q.queuecount() == SIZE)
        cout << "队列已满。"<< endl;

    while (q.queuecount() > 0)
    {
        pWorker[--count].Show();
        q.dequeue(pWorker[count]);
    }

    if (q.queuecount() ==0 )
        cout << "队列已清空。" << endl;



}