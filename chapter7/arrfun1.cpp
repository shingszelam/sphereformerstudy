//
// Created by 77469 on 2023/12/1.
//
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);
using namespace  std;

int main()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};

    int sum = sum_arr(cookies, ArSize);
    cout << "total cookies eaten: " << sum << endl;
    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;

    for (int i = 0; i <n ; i++)
        total = total + arr[i];
    return total;
}