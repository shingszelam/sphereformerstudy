//
// Created by 77469 on 2023/12/2.
//
#include <iostream>
#include <cstring>

using namespace std;

const int Size = 5;
void display(const string sa[], int n);

int main()
{
    string list[Size];
    cout << "enter your " << Size << " favorite astronomical sights:\n";
    for (int i = 0; i < Size; i ++)
    {
        cout << i+1 << ": ";
        getline(cin, list[i]);
    }
    cout << "your list:\n";
    display(list, Size);
    return 0;
}

void display(const string sa[], int n)
{
    for (int i = 0; i < n ; i++)
        cout << i+ 1<< ": " << sa[i] << endl;
}