//
// Created by 77469 on 2023/11/28.
//
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << " type, and i shall repeat.\n";
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            cout << ch;
        else
            cout << ++ch;
        cin.get(ch);
    }
    cout << "\npls excuse the slight confusion.\n";
    return 0;
}