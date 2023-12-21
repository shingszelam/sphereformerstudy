//
// Created by 77469 on 2023/12/18.
//
#include <iostream>
#include "stock10.h"

int main()
{
    {
        using std::cout;
        cout << "Using constructors to create new objects\n";
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        Stock stock2 = Stock("Boffo Objects", 2, 2.0);
        stock2.show();

        cout << "Assigning stock1 to stock2: \n";
        stock2 = stock1; //可以赋值操作了

        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();//两个显示内容相等

        cout << "Using a constructor to reset an object\n";
        stock1 = Stock("Niffy Foods", 10, 50.0);
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
    }//大括号保证在返回语句前可以使用到析构函数
    return 0;
}