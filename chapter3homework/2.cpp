//
// Created by 77469 on 2023/11/13.
//
#include <iostream>
using namespace std;



int main()
{
    int inc , inch;
    cout << "enter your height :" ;
    cin >> inch;
    cin >> inc;
    cout << "your height is " << inch << " inch " << inc << " inc " << endl;

    int pound;
    cout << "enter your weight " ;
    cin >> pound;
    cout << "your weight is " << pound <<  "pound" <<  endl;

    int heightinc;
    double weightkg;
    double heightm;

    double cm_per_inc = (1 / 2.54);
    double kg_per_pound = 2.2 ;

    heightinc = (12 * inch + inc);
    //cout << heightinc << endl;
    heightm = heightinc * cm_per_inc;
    //cout << heightm << endl ;
    weightkg = pound * kg_per_pound;

    cout << "your height is " << heightm / 100 << " m ";

    cout << "your weight is " << weightkg << "kg ";
    cout << "your BMI is " << weightkg / heightm << endl;


}

