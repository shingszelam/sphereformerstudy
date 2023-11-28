//
// Created by 77469 on 2023/11/28.
//
#include <iostream>
using namespace std;

const int Max = 5;
int main()
{
    //获得数据
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for (i=0; i< Max; i++)
    {
        cout << "round#" << i+1 << ": ";
        while (!(cin >> golf[i]))
        {
            cin.clear();//重置输入
            while (cin.get() != '\n')
                continue; //抛弃不符合得输入
            cout << "pls enter a number: ";
        }
    }
    //计算均值
    double total = 0.0;
    for ( i = 0; i < Max; ++i) {
        total += golf[i];
    }
    //汇报结果
    cout << total /Max << " = average score " << Max << " rounds\n";
    return 0;
}