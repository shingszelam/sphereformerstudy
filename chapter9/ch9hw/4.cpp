//
// Created by 77469 on 2023/12/17.
//
#include "namesp.h"
#include <iostream>

using namespace SALES;

int main()
{
    double ar1[3] ={11.56, 27.32, 18.1};
    Sales s1{
            {23.72, 19.69, 31.23, 17.22},
    };
    Sales s2;
    setSales(s2, ar1, 3);
    setSales(s1);
    showSales(s1);
    showSales(s2);
    return 0;
}