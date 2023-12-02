//
// Created by 77469 on 2023/12/1.
//
#include <iostream>

using namespace std;

const int ArSize = 8;
int sum_arr(int arr[], int n );

int main()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    cout << cookies << " = array address, ";
    cout << sizeof(cookies) << " = sizeof cookies.\n";
    int sum = sum_arr(cookies, ArSize);
    cout << "total cookies eaten: " << sum << endl;
    sum = sum_arr(cookies, 3);
    cout << "first three eaters ate " << sum << endl;
    sum = sum_arr(cookies + 4, 4);
    cout << "last four eaters ate " << sum << endl;

}

int sum_arr(int arr[], int n)
{
    int total = 0;
    cout << arr << " = arr,";
    cout << sizeof (arr) << " = sizeof(arr)\n";

    for (int i = 0; i <n ; i++)
        total = total + arr[i];
    return total;
}