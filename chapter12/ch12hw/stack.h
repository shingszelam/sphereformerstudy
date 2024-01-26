//
// Created by 77469 on 2024/1/23.
//使用动态分配的数组保存栈顶

#ifndef CHAPTER12_STACK_H
#define CHAPTER12_STACK_H
typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10};
    Item * pitems;
    int size;
    int top;
public:
    Stack(int n = MAX);
    Stack(const Stack & st);//复制构造函数
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
    Stack & operator = (const Stack & st); //赋值函数
};
#endif //CHAPTER12_STACK_H
