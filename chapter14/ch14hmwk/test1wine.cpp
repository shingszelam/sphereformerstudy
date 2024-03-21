//
// Created by 77469 on 2024/3/11.
//

#include "test1wine.h"
#include <iostream>
#include <cstring>
using namespace std;


Wine::Wine(const std::string &s, const int &y, const int a[], const int b[]) : label(s), year(y)
{
    m_num.first().resize(y);
    m_num.second().resize(y);
    for (int i= 0; i < year; i++)
    {
        m_num.first().operator[](i) = a[i];
        m_num.second().operator[](i) = b[i];
    }
}

void Wine::GetBottles()
{
    cout << "Enter " << label << " data for " << year << " years : "<<endl;
    m_num.first().resize(year);
    m_num.second().resize(year);
    for (int i =0 ; i < year; i++)
    {
        cout << "Enter year: " ;
        cin >> m_num.first().operator[](i);
        cout << "Enter bottles for that year: ";
        cin >> m_num.second().operator[](i);
    }

}

void Wine::Show()
{
    cout << "Wine: " << "\t" << label << endl;
    cout << " " << "\t" << "Year" << "\t" << "Bottles"<< endl;
    for (int i =0; i < year; i++)
    {

        cout << " " << "\t" << m_num.first().operator[](i) << "\t" << m_num.second().operator[](i)<< endl;
    }
}

int Wine::sum()
{
    int count = 0;
    for (int i = 0; i < year; i++)
    {
        count += m_num.second().operator[](i);
    }
    return count;
}