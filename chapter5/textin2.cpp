//
// Created by 77469 on 2023/11/27.
//
#include <iostream>

using namespace std;

int main()
{
    char ch;
    int count = 0;

    cout << "enter characters; enter # to quit: \n";

    cin.get(ch);

    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read \n ";
    return 0;
}