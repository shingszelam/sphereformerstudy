//
// Created by 77469 on 2023/12/16.
//
#include <iostream>
using namespace std;

extern double warming;

void update(double dt);
void local();

void update(double dt)
{
    extern double warming;
    warming += dt;
    cout << "updating global warming to " << warming;
    cout << " degrees.\n";
}

void local()
{
    double warming = 0.9;

    cout << "local warming = " << warming << " degrees.\n";
    cout << "but global warming = " << ::warming; //使用::作用域解析运算符表示使用变量的全局版本。
    cout << " degrees.\n";
}