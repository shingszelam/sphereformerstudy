//
// Created by 77469 on 2023/11/24.
//
#include <iostream>

using namespace std;

int main()
{
    cout << "你的房子是什么时候建立的？\n";
    int year;
    cin >> year;
    cout << "这条街道的地址是什么？\n";
    char address[80];
    cin >> address;
    cout << "建造年份" << year << endl;
    cout << "地址 " << address << endl;

    return 0;


}