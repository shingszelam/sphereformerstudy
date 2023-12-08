//
// Created by 77469 on 2023/12/7.k
//
#include <iostream>
using namespace std;

int stepmulti(int );

int main()
{
    int n;

    while (cin >> n)
    {
        int result = stepmulti(n);
        cout  << n << " 的阶乘为 " << result << endl;
    }
    cout << "输入不是数字，程序退出";
    return 0;
}

int stepmulti(int data)
{
    int arr[data];
    for (int i =0; i <= data ; i++ )
    {
        arr [i] = i;
    }

    int ssum[data];

    for (int j = 2; j <= data; j ++)
    {
        ssum[0] = ssum[1] = 1;
        ssum[j] = ssum[j-1] * arr[j];
    }
    int res = ssum[data];
    return res;
}