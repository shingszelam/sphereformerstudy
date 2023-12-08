//
// Created by 77469 on 2023/12/8.
//
#include <iostream>

using namespace std;

double add1(double , double );
double multi(double , double );
double  div(double , double );

double calculate(double , double , double (*)(double , double )); //传入一个什么样的指针？

double (*pf[3])(double , double ) = {add1, multi, div};

int main()
{
    cout << "请输入两个数字：" << endl;
    double a,b;
    while(cin>>a>>b)
    {
        for (int i=0; i < 3; i++)
            cout << calculate(a, b, pf[i])<< endl;
    }

    return 0;
}

double calculate(double x, double y, double (*pf)(double , double ))
{
    return pf(x,y);
}
double  add1(double x , double y)
{
    return x + y;
}
double   multi(double x, double y)
{
    return x * y;
}
double div(double x, double y)
{
    return x / y;
}
