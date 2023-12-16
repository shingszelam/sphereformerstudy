//
// Created by 77469 on 2023/12/11.
//
#include <iostream>
template <typename T>
void Swap(T & a, T & b);

template <typename T>
void Swap(T *a, T *b, int n);
void Show(int a[]);

using namespace std;

const int Lim = 8;

int main()
{
    int i = 10;
    int j = 20;
    cout <<"i ,j = " << i << ", " << j << endl;
    cout << "using compiler-generated int swapper: \n";
    Swap(i,j);
    cout <<"now  i,j = " <<  i << ", " << j<< endl;

    int dl[Lim] = {0,7,0,4,1,7,7,6};
    int d2[Lim] = {0,7,2,0,1,9,6,9};
    cout << "original arrays:\n";
    Show(dl);
    Show(d2);
    Swap(dl,d2,Lim);
    cout << "swapped array:\n";
    Show(dl);
    Show(d2);
    return 0;
}

template <typename T>
void Swap(T & a, T & b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
template <typename T>
void Swap(T a[], T b[], int n)
{
    T temp;
    for (int i = 0; i <n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
void Show(int a[])
{
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for(int i=4; i<Lim; i++)
    {

        cout << a[i];
    }
    cout << endl;
}