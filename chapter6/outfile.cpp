//
// Created by 77469 on 2023/11/28.
//
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("carinfo.txt");

    cout << "enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "enter the model year: ";
    cin >> year;
    cout << "enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    //在屏幕上展示输出
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "make and model: " << automobile << endl;
    cout << "year: "<< year << endl;
    cout << "was asking $" << a_price << endl;
    cout << "now asking $" << d_price << endl;

    //做同样的事情使用Outfile而非cout
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "make and model: " << automobile << endl;
    outFile << "year: "<< year << endl;
    outFile << "was asking $" << a_price << endl;
    outFile << "now asking $" << d_price << endl;

    outFile.close();
    return 0;

}