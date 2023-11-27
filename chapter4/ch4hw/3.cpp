//
// Created by 77469 on 2023/11/24.
//
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char first[10];
    char last[10];

    cout << "enter your first name: " ;
    cin.getline(first, 10);
    cout << "enter your last name: " ;
    cin.getline(last, 10);
    cout << "here is the information in a single string: " << last << ", " << first;

    return 0;
}