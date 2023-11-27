//
// Created by 77469 on 2023/11/23.
//
//如何声明指针
#include <iostream>
using namespace std;

int main()
{
    int updates = 6 ;
    int * p_updates; //声明了一个整形指针
    p_updates = &updates; //给一个地址给指针

    cout << "values: updates = " << updates;
    cout << " , *p_updates = " << *p_updates << endl;

    cout << " address: &updates = " << &updates;
    cout << " , p_updates = " << p_updates << endl;

    //使用指针来改变值
    *p_updates = *p_updates + 1;
    cout << "now updates = " << updates <<endl;

    return 0;
}