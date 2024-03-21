//
// Created by 77469 on 2024/2/28.
//
#include "1.h"
#include <iostream>
using namespace std;
void Bravo(const Cd & disk);

int main()
{

    Cd c1("Beats", "Capitol", 14, 35.5);
    Classic c2("Piano Sonata in B flat, Fantasia in C",
               "Alfred Brendel", "Philips", 2, 57.17);
    Cd * pcd = & c1;

    cout << "using object directly:\n";
    c1.Report();
    cout << endl;
    c2.Report();

    cout << "Using type cd* pointer to objects:\n";
    pcd->Report();
    //pcd首先指向Cd类 所以应该现实的是c1的信息
    //运行结果
    /****
     * Using type cd* pointer to objects:
Performers is Beats
Label is Capitol
Selection: 14 Playtime: 35.5
     */
    cout << "---------------------" << endl;
    pcd = & c2; //将派生类地址赋给基类
    pcd->Report();

    cout << "Calling a function with a Cd reference argument:\n";
    Bravo(c1);
    cout << "-------------------------------------"<< endl;
    Bravo(c2); //将派生类转换到基类 向上转换 按引用传递

    cout << "Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}

void Bravo(const Cd & disk)
{
    disk.Report();
}
//如果此处不是将Cd的引用作为参数而是直接传递对象 会导致只显示基类成员 而不显示work