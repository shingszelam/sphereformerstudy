//
// Created by 77469 on 2024/3/1.
//
#include <iostream>
#include "test4.h"
using namespace std;

int main()
{
    Port tawny("csl", "tawny", 25);
    tawny.Show();
    cout << tawny << endl;

    cout << "------------------------------" << endl;

    VintagePort alchol("bland", 32, "Cockburn", 1982);
    cout << "Cockburn信息: " << endl;
    alchol.Show();
    cout << "打翻了一瓶酒之后的余量: " <<endl;
    alchol -=1;
    cout << alchol;

    return 0;

}