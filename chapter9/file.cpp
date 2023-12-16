//
// Created by 77469 on 2023/12/14.
//
#include <iostream>
#include "coordin.h"

using namespace std;

int main()
{
    rect replace;
    polar pplace;

    cout << "enter the x and y values:";
    while (cin >> replace.x >> replace.y)
    {
        pplace = rect_to_polar(replace);
        show_polar(pplace);
        cout << "next two numbers (q to quit): ";

    }
    cout << "bye\n";
    return 0;
}