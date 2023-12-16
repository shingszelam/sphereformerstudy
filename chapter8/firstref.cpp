//
// Created by 77469 on 2023/12/10.
//
#include <iostream>

using namespace std;


int main()
{
    int rats = 101;
    int & rodents = rats;
    cout << "rats = " << rats;
    cout << " ,  rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << " ,  rodents = " << rodents << endl;

    cout << "rats addrees = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    return 0;
}