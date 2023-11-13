//
// Created by 77469 on 2023/11/13.
//
#include <iostream>
using namespace std;

int main()
{
    int height ;


    //一英寸等于2.54厘米 一英尺等于十二英寸
    cout << "enter your height = " << endl;
    cin >> height ;
    int heightinc = height * 2.54;
    cout << "your height(inc) = " << heightinc << " inc " << endl;
    int const  per_ihch_inc = 12;
    cout << "your height = " << heightinc / per_ihch_inc << "inch" << heightinc % per_ihch_inc  << "inc" ;

    return 0;
}