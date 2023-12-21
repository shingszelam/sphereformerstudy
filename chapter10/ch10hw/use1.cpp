//
// Created by 77469 on 2023/12/19.
//
#include <iostream>
#include "1.h"

int main()
{
    {
        Bank client1;
        client1.show();


        Bank clinet2 = Bank("Shing zelam", "36242319981111", 2839.77);
        clinet2.show();
        clinet2.input(2752.01);
        clinet2.output(20.23);
        clinet2.show();

        client1 = clinet2;
        client1.show();
    }
    return 0;
}