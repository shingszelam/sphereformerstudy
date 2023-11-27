//
// Created by 77469 on 2023/11/23.
//
//将指针初始化为一个地址
#include <iostream>
using namespace std;

int main()
{
    int higgens = 5;
    int* pt = &higgens;

    cout << " vlaue of higgens = " << higgens
    << " ; add of higgens = " << &higgens << endl;

    cout << " vlaue of pt = " << *pt
    << " ; add of pt = " << pt << endl;

    return 0;
}