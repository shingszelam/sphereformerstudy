//
// Created by 77469 on 2023/11/27.
//
#include <iostream>
#include <array>

using namespace std;
const int Arsize = 101;

int main()
{
    array<long double, Arsize> factorials;
    factorials[0] = factorials[1] = 1;
    for (int i = 2; i < Arsize; i++)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < Arsize; i++ )
        cout << i << " ! = " << factorials[i] << endl;

}