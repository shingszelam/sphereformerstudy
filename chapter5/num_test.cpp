//
// Created by 77469 on 2023/11/25.
//
#include <iostream>
using namespace std;

int main()
{
    cout << "enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i ;
    for (i = limit; i; i--) //当i=0的时候退出
        cout <<  'i = ' << i << "\n";
    cout << "done now that i = " << i << endl;
    return 0;
}