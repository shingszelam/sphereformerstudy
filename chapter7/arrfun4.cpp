//
// Created by 77469 on 2023/12/2.
//
#include <iostream>
const int ArSize = 8;
int sum_arr (const int * begin, const int * end);

using namespace std;

int main()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};

    int sum = sum_arr(cookies, cookies+ArSize);
    cout << "total cookies eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies, cookies+3);
    cout << "first three eaters ate " << sum <<" cookies.\n";
    sum = sum_arr(cookies+4, cookies+8);
    cout << "last four eaters ate " << sum << " cookies.\n";

    return 0;

}

int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;

    for (pt = begin; pt != end; pt++)
        total = total + *pt;
    return total;

}