//
// Created by 77469 on 2023/12/16.
//
#include <iostream>
extern int tom;
static int dick =10;
int harry = 200;

void remote_access()
{
    using namespace std;
    cout << "remote_access() reports the follwing address:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick,";
    cout << &harry << " = &harry\n";
}