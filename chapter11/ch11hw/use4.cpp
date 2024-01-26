//
// Created by 77469 on 2024/1/7.
//
#include <iostream>
#include "4.h"

int main()
{
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "aida and tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = operator+(aida, tosca);//使用友元函数
    //如果直接使用temp = aida + tosca的话 会导致二义性 不知道是使用成员函数还是友元函数
    cout << "aida + tosca = " << temp << endl;
    temp = aida * 1.17;
    cout << "aida * 1.17 = " << temp << endl;
    cout << "10 * tosca: " << 10.0*tosca << endl;


    return 0;
}