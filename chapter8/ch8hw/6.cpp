//
// Created by 77469 on 2023/12/13.
//
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

template <typename T>
T Max(const T arr[ ], int n);
template <> const char* Max(const char* ch[], int num);////为什么？？？编译不通过

int main()
{
    int ar1[6] = {1,2,5,4,3,21};
    double ar2[4] = {9.7, 2.7, 8.8 ,1.2};
    cout << "数组1最大的数为： " << Max(ar1,6);
    cout << endl << "数组2最大的数为： " << Max(ar2,4);

    const char* arr[5] = { "abc","acd","cdfed","abbbdaeeeeef","af" };
    const char* arr1;
    arr1 = Max(arr, 5);
    cout << arr1 << endl;

    return 0;
}

template <typename T>
T Max(const T arr[] , int n)
{
    T max=arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] >= max)
            max = arr[i];
        else
            max = max;
    }

    return  max;
}


template <> const char* Max(const char* ch[], int num) {
    int max = 0;
    int n = 0;
    for (int i = 0; i < num; i++) {
        if (max < strlen(ch[i])) {
            max = strlen(ch[i]);
            n = i;//!!
        }
    }
    const char *address = ch[n];//!!!!
    return address;
}