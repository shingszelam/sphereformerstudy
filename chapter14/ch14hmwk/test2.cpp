//
// Created by 77469 on 2024/3/11.
//

#include "test2.h"
#include <iostream>

using namespace std;

Wine2::Wine2(const char *a, const int &y)
{
    name = a;
    year = y;
    PairArray::first().resize(year);
    PairArray::second().resize(year);

}

Wine2::Wine2(const char *c, const int &y, const int a[], const int b[])
{
    name =c ;
    year = y;
    PairArray::first().resize(year);
    PairArray::second().resize(year);
    for (int i = 0; i < year; i ++)
    {
        PairArray::first().operator[](i) = a[i];
        PairArray::second().operator[](i) = b[i];
    }

}

void Wine2::GetBottles()
{
    cout << "Enter " << name << " data for " << year << " years : "<<endl;
    PairArray::first().resize(year);
    PairArray::second().resize(year);
    for (int i =0 ; i < year; i++)
    {
        cout << "Enter year: " ;
        cin >> PairArray::first().operator[](i);
        cout << "Enter bottles for that year: ";
        cin >> PairArray::second().operator[](i);}
}

void Wine2::Show()
{
    cout << "Wine: " << "\t" << name << endl;
    cout << " " << "\t" << "Year" << "\t" << "Bottles"<< endl;
    for (int i =0; i < year; i++)
    {

        cout << " " << "\t" << PairArray::first().operator[](i) << "\t" << PairArray::second().operator[](i)<< endl;
    }
}

int Wine2::sum()
{
    int count = 0;
    for (int i = 0; i < year; i++)
    {
        count += PairArray::second().operator[](i);
    }
    return count;
}