//
// Created by 77469 on 2023/11/25.
//
#include <iostream>

using namespace std;

int main()
{
    cout << "enter an integer: ";
    int by;
    cin >> by;
    cout << "cunting by " << by << "s:\n";
    for (int i = 0 ; i<100 ;i = i + by)
        cout << i << endl;
    return 0;
}