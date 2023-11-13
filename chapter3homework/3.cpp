//
// Created by 77469 on 2023/11/13.
//
#include <iostream>
using namespace std;

int main()
{
    int degrees, minutes, seconds;
    cout << "enter a latitude in degrees, minutes, seconds: ";
    cout << "first, enter the degrees : " ;
    cin >> degrees;
    cout << "second, enter the minutes : ";
    cin >> minutes;
    cout << "finally, enter the seconds : ";
    cin >> seconds;

    int const d_per_m = 60;
    int const d_per_s = 3600;

    cout << degrees << " degrees, "
    << minutes << " minutes, "
    << seconds << " seconds = "
    << double (degrees) + double (minutes) / double (d_per_m) + double (seconds) / double (d_per_s) << "degress" << endl;
    return 0;
}