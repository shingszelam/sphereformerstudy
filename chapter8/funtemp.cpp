//
// Created by 77469 on 2023/12/11.
//
#include <iostream>
using namespace std;

template <typename T>
void Swap(T &a , T &b);

int main()
{
    int i = 10;
    int j = 20;
    cout <<"i ,j = " << i << ", " << j << endl;
    cout << "using compiler-generated int swapper: \n";
    Swap(i,j);
    cout <<"now  i,j = " <<  i << ", " << j<< endl;

    double x = 24.5;
    double y = 81.7;
    cout <<"x ,y = " << x << ", " << y << endl;
    cout << "using compiler-generated int swapper: \n";
    Swap(x,y);
    cout <<"now  x,y = " <<  x << ", " << y<< endl;

    return 0;
}

template <typename T>
void Swap(T &a , T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}