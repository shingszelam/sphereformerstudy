//
// Created by 77469 on 2023/12/19.
//
#include <iostream>
#include "4.h"

Sales::Sales() : sales{0.0 , 0.0,0.0,0.0} ,max(0.0), min(0.0), average(0.0)
{ }


Sales::Sales(double arr[], int n = 0)
{
    int total = 0;
    for (int i = 0; i < n && n <=4; i++)
    {
        sales[i] = arr[i];
        if (sales[i] >= max)
            max = sales[i];
        else min = sales[i];
        total += sales[i];
        average = total / n;
    }
}

void Sales::showSales() const
{
    using namespace std;
    cout << "sales  = ";
    int n = sizeof (sales) / sizeof (sales[0]);
    for (int i = 0; i < n; i++ ) {
        cout  << sales[i] << " ," ;
    }
    cout << endl ;

    cout << "average = " << average << endl;
    cout << "max = " << max << endl;
    cout << "min = "<< min << endl;

}