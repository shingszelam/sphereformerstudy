//
// Created by 77469 on 2023/11/28.
//
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter two integers: ";
    cin >> a >> b;
    cout << "the larger of  "<< a << " and " << b;
    int c = a > b? a:b; //如果a大于b 则c=a 否则c= b
    cout << " is " << c;
    return 0;
}