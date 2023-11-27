//
// Created by 77469 on 2023/11/26.
//
#include <iostream>
using namespace std;

const int ArSize = 20;
int main()
{
    char name[ArSize];
    cout << "your first name, pls ";
    cin >> name;
    cout << "here is your name, verticalized and asciiized: \n";
    int i = 0;
    while (name[i] != '\0')
    {
        cout << name[i] << ": " << int(name[i] ) << endl;
        i++;
    }
    return 0 ;
}