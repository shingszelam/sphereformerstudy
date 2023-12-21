//
// Created by 77469 on 2023/12/17.
//
#include <iostream>
#include "namesp.h"

using namespace SALES;
namespace SALES{
    void setSales(Sales & s, const double ar[], int n)
    {
        double total = 0.0;
        for (int i = 0; i < n; i++)
        {
            s.sales[i] = ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (s.sales[i] >= s.max )
                s.max = s.sales[i];
            else s.min = s.sales[i];

            total += s.sales[i];
            s.average = total / n;
        }
    }
    void setSales(Sales & s)
    {
        double total = 0.0;
        for (int i = 0; i < 4; i++)
        {
            if (s.sales[i] >= s.max )
                s.max = s.sales[i];
            else s.min = s.sales[i];

            total += s.sales[i];
            s.average = total / 4;
        }
    }
    void showSales(const Sales & s)
    {
        using namespace std;
        cout << "sales  = ";
        int n = sizeof (s.sales) / sizeof (s.sales[0]);
        for (int i = 0; i < n; i++ ) {
            cout  << s.sales[i] << " ," ;
        }
        cout << endl ;

        cout << "average = " << s.average << endl;
        cout << "max = " << s.max << endl;
        cout << "min = "<< s.min << endl;
    }
}
