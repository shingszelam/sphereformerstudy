//
// Created by 77469 on 2023/11/30.
//
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    double donation[10];
    int count = 0;

    cout << "donation 1: ";

    while (count < 10 && cin >> donation[count])
    {
        if (++count < 10)
            cout << "donation " << count + 1 <<": " ;
    }

    double donasum = 0.0;
    for(int i = 0; i <count; i++)
        donasum += donation[i];


    double average = 0;
    if (count != 0 )
        average = donasum / count;
    cout << average <<  " = average of donation." << count << " donation\n" ;


    for (int i =0; i < 10; ++i)
    {
        if (donation[i] > donasum/count)
            cout << "donation " << i+1 << "is lager than average, which is " << donation[i] <<endl;
    }





    return 0;


}