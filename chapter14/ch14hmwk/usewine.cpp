//
// Created by 77469 on 2024/3/11.
//
#include <iostream>
#include "test2.h"
#include <valarray>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter name of wine: ";
    char lab[50];
    cin.get(lab,50);
    cout << "Enter number of years: ";
    int yrs;
    cin >> yrs;

    Wine2 holding(lab, yrs);
    holding.GetBottles();
    holding.Show();

    const int YRS = 3;
    int y[YRS] = { 1993, 1995, 1998};
    int b[YRS] = {48, 60, 72};
    Wine2 more{"Gushing Grape Red", YRS, y, b};
    more.Show();
    cout << "Total bottles for " << more.Label()
    << ": " << more.sum() << endl;
    cout << "Bye\n";
    return 0;
}