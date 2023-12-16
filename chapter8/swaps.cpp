//
// Created by 77469 on 2023/12/10.
//
#include <iostream>
using namespace std;

void swapr(int & a, int & b); //a,b是一个整数引用
void swapp(int * p, int * q); //p,q是证书地址
void swapv(int a , int b); //ab是新变量；

int main()
{
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "using reference to swap contents:\n";
    swapr(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "using pointers to swap contents: \n";
    swapp(&wallet1, &wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "trying to use passing by value:\n";
    swapv(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    return 0;
}

void swapr(int & a, int & b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}
void swapp(int * p, int * q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;

}
void swapv(int a , int b)
{
    int temp;
    temp = a;
    a = b;
    b = a;
}