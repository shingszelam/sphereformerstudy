//
// Created by 77469 on 2023/11/27.
//
#include <iostream>
using namespace std;

int main()
{
    int range1 ;
    int range2 ;
    cin >> range1;
    cin >> range2;
    int a = 0;
    for (int i = range1; i <= range2 ; i++)
    {
        a += i;
        //for (; i = range2; ) 这种做法会导致一直让a = 2
        cout << a << endl;
    }

    return 0;

}