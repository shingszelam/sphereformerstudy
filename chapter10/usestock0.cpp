//
// Created by 77469 on 2023/12/18.
//
#include <iostream>
#include "stock00.h"

int main()
{
    Stock fully_the_cat;
    fully_the_cat.acquire("NanoSmart", 20, 12.5);
    fully_the_cat.show();
    fully_the_cat.buy(15, 18.125);
    fully_the_cat.show();
    fully_the_cat.sell(400, 20.00);
    fully_the_cat.show();
    fully_the_cat.buy(300000, 40.125);
    fully_the_cat.show();
    fully_the_cat.sell(300000,0.125);
    fully_the_cat.show();
    return 0;

}