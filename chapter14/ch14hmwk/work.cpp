//
// Created by 77469 on 2024/3/12.
//
#include <iostream>
#include "work.h"

using std::cout;
using std::cin;
using std::endl;

Worker::~Worker() {}

//保护方法
void Worker::Show () const
{
    cout << "Name: " << fullname << endl;
    cout << "Employee ID: " << id << endl;
}

void Worker::Set()
{
    cout << "Enter worker's fullname: ";
    getline(cin,fullname);
    cout << "Enter worker's ID: " ;
    cin >> id;
    while (cin.get() != '\n')
        continue;
}

