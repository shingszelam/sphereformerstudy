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

    cout << "rats addrees = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "bunnies address = " << &bunnies;
    cout << ", rats address = " << &rats;
    cout << ", rodents address = " << &rodents;

    return 0;


}