//
// Created by 77469 on 2024/1/2.
//
#include <iostream>
#include "mytime0.h"

int main()
{
    using std::cout;
    using std::endl;

    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time  = ";
    planning.show();
    cout << endl;

    cout << "coding time  = ";
    coding.show();
    cout << endl;

    cout << "fixing time  = ";
    fixing.show();
    cout << endl;

    total = coding.Sum(fixing);
    cout << "coding.sum(fixing) = ";
    total.show();
    cout << endl;

    return 0;
}