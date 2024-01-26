//
// Created by 77469 on 2024/1/8.
//
#include <iostream>
using namespace std;
#include "7.h"

int main()
{
    Complexcsl a(3.0, 4.0);
    Complexcsl c;
    cout << "Enter a complex number (q to quit):\n";
    while(cin>>c)
    {
        cout << "c is " << c << "\n";
        cout << "complex conjugate is " << ~c << "\n";
        cout << "a + c is " << a + c << endl;
        cout << "a - c is " << a -c << endl;
        cout << "a * c is " << a * c << endl;
        cout << "2 * c is " << 2 * c << endl;
        cout << "Enter a complex number (q to quit):\n";
    }
    cout << "Done!\n";
    return 0;
}