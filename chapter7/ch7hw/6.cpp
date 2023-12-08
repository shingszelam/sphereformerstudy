//
// Created by 77469 on 2023/12/7.
//
#include <iostream>
#include <cctype>
using namespace std;

int Fill_array(double arr[], int Arsize);
void show_array(const double arr[], int Arsize);
void Reverse_array( double arr[], int Arsize);
int Max = 20;
int main()
{
    cout << "请填充数组" << endl;

    double arr1[Max];
    int Ar = Fill_array(arr1,Max);
    cout << "数组中有 " << Ar << "个元素。"<< endl;
    show_array(arr1, Ar);
    Reverse_array( arr1, Ar);

    return 0;

}

int Fill_array(double arr[], int Arsize)
{
    double n ;
    int i ;

    for ( i =0; i < Arsize; i++)
    {
        cin >> n;
        if (!cin )
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            break;
        }
        arr[i] = n;
    }
    Arsize = i;
    return Arsize;

}

void show_array(const double arr[], int Arsize)
{
    for (int i = 0; i < Arsize; i++)
        cout << arr[i] << "\t" << endl;
}


void Reverse_array(  double arr[], int Arsize)
{
    double brr[Arsize];
    int i = 0;
    int j = Arsize-1;
    for (i,j; i < Arsize && j >= 0; i++, j--)
        brr[i] = arr[j];
    cout << "数组倒序为 " <<endl;
    for (int a = 0; a < Arsize; a++)
    {
         cout << brr[a] << endl;
    }
    cout << "除去首尾数组倒序为 " <<endl;
    for (int a = 1; a < Arsize-1; a++)
    {
         cout << brr[a] << endl;
    }
}