//
// Created by 77469 on 2023/12/20.
//
#include <iostream>
#include <cstring>
#include "7.h"

Plorg::Plorg(char * n , int C )
{
    strcpy(name, n);
    CI = C;
}

void Plorg::reset(int C)
{
    CI = C;
}

void Plorg::show() const
{
    using namespace std;
    cout << "用户名称为： " << name << endl;
    cout << "用户满意指数为： "<< CI << endl;
}