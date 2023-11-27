//
// Created by 77469 on 2023/11/27.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "请输入大小: ";
    cin >> n;

    string star[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // 设置对角线上的元素为星号，其他为点号
            if (j >= n - i - 1 && j <= n - 1)
                star[i][j] = "*";
            else
                star[i][j] = ".";
        }
    }

    // 输出数组--循环嵌套输出
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << star[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



