//
// Created by 77469 on 2024/3/7.
//

#ifndef CHAPTER14_STACKTP_H
#define CHAPTER14_STACKTP_H

template <class Type>
class Stack
{
private:
    enum {Max = 10};
    Type items[Max];
    int top;

public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(const Type & item);
    bool pop(Type & item);

};

template <class Type>
Stack<Type>::Stack()
{
    top = 0;
}

template <class Type>
bool Stack<Type>::isempty()
{
    return top ==0;
}

template <class Type>
bool Stack<Type>::isfull()
{
    return top==Max;
}

template <class Type>
bool Stack<Type>::push(const Type &item)
{
    if (top < Max)
    {
        items[top++] = item;
        return true;
    } else
        return false;
}

template <class Type>
bool Stack<Type>::pop(Type &item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    } else
        return false;
}
#endif //CHAPTER14_STACKTP_H
