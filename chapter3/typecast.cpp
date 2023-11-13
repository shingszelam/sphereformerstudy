//
// Created by 77469 on 2023/11/12.
//

#include <iostream>

using namespace std;

int main()
{
    int auks, bats, coots;

    auks = 11.99 + 11.99;

    bats = int (11.99) + int (11.99);
    coots = (int) 11.99 + int (11.99);
    cout << "akus = " << auks << endl;
    cout << " bats = " << bats << endl;
    cout << "coots = " << coots << endl;

    char ch = 'Z';
    cout << "the code for " << ch << "is ";
    cout << int (ch) << endl;
    cout <<  "yes the code is";
    cout << static_cast<int>(ch) << endl;
    char c1 = 65;
    char c2 = 'A';
    cout << "c1 = " << c1  << endl;
    cout << "c2 = " << c2  << endl;
    cout << 15 % 4<<endl;
    return 0;


}