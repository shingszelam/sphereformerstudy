//
// Created by 77469 on 2023/12/20.
//
#include <iostream>
#include "7.h"

int main()
{
    Plorg plorg1;
    plorg1.show();

    Plorg plorg2("shing szelam", 99);
    plorg2.show();
    plorg2.reset(100);
    plorg2.show();

    return 0;

}