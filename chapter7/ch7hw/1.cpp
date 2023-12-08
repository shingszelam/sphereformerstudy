//
// Created by 77469 on 2023/12/5.
//
#include <iostream>
using namespace std;

int main()
{
    double x;
    double y;
    while (cin>>x>>y && x !=0 && y!=0)
    {
        cout << (2.0 * x * y /(x + y)) << endl;
    }
    cout << "输入出错" << endl;
    return 0;
}
