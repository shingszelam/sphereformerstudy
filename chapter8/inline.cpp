//
// Created by 77469 on 2023/12/9.
//
#include <iostream>

inline double square(double x){return x * x;}

int main()
{
    using namespace std;
    double a, b ;
    double c=12.0;

    a= square(5.9);
    b= square(4.5 + 7.5);
    cout << "a = " << a <<", " << "b = " << b << endl;
    cout << "c = " << c;
    cout << " c的平方为 " << square(c ++) << endl;
    cout << "现在C= "<< c;
    return 0;
}