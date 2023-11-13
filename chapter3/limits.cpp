//
// Created by 77469 on 2023/11/9.
//

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    //使用sizeof运算符返回类型或变量的长度 单位为字节 虽然根据实现字节定义不同
    cout << "int is " << sizeof(int) <<  "bytes" << endl;
    cout <<  "short is " << sizeof n_short << " bytes" << endl;
    cout <<  "long is " << sizeof n_long << "bytes" << endl;
    cout << " long long is " << sizeof n_llong << "bytes" << endl;
    cout << endl;

    cout << "Maxmum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short" << n_short << endl;
    cout << "long " << n_long << endl;

    cout << "minimum int value = " << INT_MIN << endl;
    cout << "bits per byte = " << CHAR_BIT << endl;

}