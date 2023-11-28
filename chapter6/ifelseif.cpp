//
// Created by 77469 on 2023/11/28.
//
#include <iostream>
using namespace std;

const int Fave = 27;

int main()
{
    int n;
    cout << "enter a number in the range 1-100 to find ";
    cout << "my favorite number: ";
    do
    {
        cin >> n;
        if (n < Fave)
            cout << "Too low -- guess again: ";
        else if (n > Fave)
            cout << "Too hight -- guess again: ";
        else
            cout << Fave << " is right! \n";
    } while (n != Fave);
    return 0;
}