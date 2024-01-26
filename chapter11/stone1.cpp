//
// Created by 77469 on 2024/1/3.
//
#include <iostream>
#include "stonewt1.h"

int main()
{
    using std::cout;
    Stonewt poppings(9, 2.8);
    double p_wt = poppings;
    cout << "Convert to doubel => ";
    cout << "Poppings: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppings: " << int (poppings) << " pounds.\n";
    //cout << poppings;无法直接转换
    return 0;
}