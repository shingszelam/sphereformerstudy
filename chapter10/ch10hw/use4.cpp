//
// Created by 77469 on 2023/12/19.
//
#include <iostream>
#include "4.h"

int main()
{
    Sales sales1;
    sales1.showSales();

    double ar1[3] ={11.56, 27.32, 18.1};
    Sales sales2 = {ar1, 3};
    sales2.showSales();

    return 0;
}