//
// Created by 77469 on 2023/11/27.
//
#include <iostream>
using namespace std;

int main(void)
{
    int ch;
    int count = 0;

    while ((ch = cin.get()) != EOF)
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read \n";
    return 0;
}