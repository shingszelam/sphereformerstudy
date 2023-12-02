//
// Created by 77469 on 2023/12/2.
//
#include <iostream>

using namespace std;

const double * f1(const double ar[], int);
const double * f2(const double [], int );
const double * f3(const double * ,int);

int main()
{
    double av[3] = {1112.3, 1542.6, 2227.9};

    //指向一个函数
    const double *(*p1)(const double * ,int ) =f1;
    auto p2 = f2;
    cout <<"使用指针指向一个函数： " << endl;
    cout << " 地址值： " << endl;
    cout << (*p1)(av,3) << ": " << *(*p1)(av,3) << endl;
    cout << p2(av,3) << ": " << *p2(av,3) << endl;

    //pa是一个指针数组
    //auto不可以进行初始化的工作
    const double *(*pa[3])(const double *, int) = {f1,f2,f3};
    //但是可以传递已经初始化的指针
    //pb指向pa第一个元素的地址
    auto pb = pa;

    cout << endl << "对函数使用指针数组： "<< endl;
    cout << " 地址值: " << endl;
    for (int i = 0 ; i < 3 ; i++)
        cout << pb[i](av,3) << ": " << *pb[i](av,3) << endl;

    cout << "对一个指针数组使用指针： " << endl;
    cout << " 地址值： "<< endl;
    auto pc = &pa;
    cout << (*pc)[0](av,3) << ": " << *(*pc)[0](av,3) << endl;

    const double  *(*(*pd)[3])(const double *, int) = &pa;
    const double * pdb = (*pd)[1](av,3);
    cout << pdb << ": " << *pdb << endl;
    cout << (*(*pd)[2])(av,3)<< ": "<< *(*(*pd)[2])(av,3) << endl;
    return 0;
}

const double * f1(const double * ar, int)
{
    return ar;
}

const double * f2(const double ar[], int )
{
    return ar+1;
}
const double * f3(const double ar[] ,int)
{
    return ar+2;
}