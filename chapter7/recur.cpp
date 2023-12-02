//
// Created by 77469 on 2023/12/2.
//
#include <iostream>
void countdown(int n);
using namespace std;

int main()
{
    countdown(4);
    return 0;
}

void countdown(int n)
{
    cout << "counting down ..." << n << endl;
    if (n>0)
        countdown(n-1);
    cout << n << ": kaboom\n";
}