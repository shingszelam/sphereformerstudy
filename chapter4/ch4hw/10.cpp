//
// Created by 77469 on 2023/11/24.
//
#include <iostream>
#include <array>

using namespace std;

double meangrade(double , double , double);

array<double, 3> grade;

int main()
{
    cout << "请输入你的四十米跑成绩，第一次： ";

    cin >>grade[0];
    cout << "第二次： " ;

    cin >> grade[1];
    cout << "第三次： ";

    cin >> grade[2];

    cout << "你的四十米跑三次成绩为 " << grade[0] <<" " << grade[1] <<  " "  << grade[2] << endl;
    cout << "你的平均成绩为 " << meangrade(grade[0], grade[1], grade[2]) << endl;

    return 0;
}

double meangrade(double x, double y, double z)
{

    double mean = (x + y + z) / 3;

    return mean;
}
