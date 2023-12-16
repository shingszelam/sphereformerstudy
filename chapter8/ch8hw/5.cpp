//
// Created by 77469 on 2023/12/13.
//
#include <iostream>
using namespace std;

template <typename T>
T Max(const T arr[5]);

int main()
{
    int ar1[5] = {1,2,5,4,3};
    double ar2[5] = {0.3, 2.7, 8.8 ,1.2, 5.6};
    cout << "数组1最大的数为： " << Max(ar1);
    cout << endl << "数组2最大的数为： " << Max(ar2);

    return 0;
}

template <typename T>
T Max(const T arr[5])
{
    T max=arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] >= max)
            max = arr[i];
        else
            max = max;
    }

    return  max;
}