//
// Created by 77469 on 2023/11/27.
//
#include <iostream>
#include <cmath>

using namespace std;

const double lr = 0.1;
const double flr = 0.05;
const double bj = 100;

double cl(double);

int main()
{
    double ds = bj;
    double dl = bj * lr;
    double cs = bj;
    //double cl = cs * flr;
    double year = 1;
    for (ds, cs, year; cs <= ds; year++)
    {
        ds = bj + dl * year;
        cs = bj*pow(( 1 + flr),year);
    }
    cout << ds << endl;
    cout << cs << endl;
    cout << "在第" << year << "年的时候" << "Cleo的投资可以超过Daphen"<< endl;
}


