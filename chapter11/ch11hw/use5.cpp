//
// Created by 77469 on 2024/1/8.
//
#include <iostream>
#include "5.h"
using std::cout;


int main()
{
    using std::cout;
    Stonewt poppings(9, 2.8, Stonewt::pouint);
    Stonewt pop2(152.6,Stonewt::sto); //此处指定节点只是将它们进行转化 而非是将它们的状态也进行改变
    double n = rand();

    cout << pop2 ;

    cout << poppings + pop2 ;

    cout << n << "次 = " << n * pop2;

    cout << "pop2 除 n = " << operator/(n,pop2);

    cout << "popping - poop2 = " << poppings - pop2;



    //pop2.show_sth();
    //poppings.show_lbs();
    //cout << poppings;无法直接转换
    return 0;
}

