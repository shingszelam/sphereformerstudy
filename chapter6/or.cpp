//
// Created by 77469 on 2023/11/28.
//
#include <iostream>
using namespace std;

int main()
{
    cout << " this program may re format your hard disk\n"
            "and destroy all your data\n"
            "do you wish to continue? <y/n>";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        cout << "you were warned!\a\a\n";
    else if (ch == 'n' || ch =='N')
        cout << "a wise choice ... bye\n";
    else
        cout << "that wasn't a y or n! apparently you"
                "can't follow \n instructions, so"
                "i'll trash your disk anyway.\a\a\a\n";
    return 0;
}