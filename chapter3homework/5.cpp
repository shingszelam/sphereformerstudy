//
// Created by 77469 on 2023/11/13.
//
#include <iostream>
using namespace std;

int main()
{
    long long population;
    long long China;

    cout << "enter the world's population : "  ;
    cin >> population;
    cout << "enter the population of china : " ;
    cin >> China;
    cout << "the population of china is " << double (China) / double (population) * 100 << "% of the world population ."
    << endl;
    return 0;
}