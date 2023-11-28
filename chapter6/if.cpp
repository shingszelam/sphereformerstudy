//
// Created by 77469 on 2023/11/28.
//
#include <iostream>

using namespace std;

int main()
{
    char ch;
    int space = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')//退出条件
    {
        if (ch == ' ') //如果输入是个空格
            ++space;
        ++total;
        cin.get(ch);
    }
    cout << space << " space, " << total ;
    cout << " characters total in sentence\n";
    return 0;
}