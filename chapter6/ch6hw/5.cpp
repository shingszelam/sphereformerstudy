//
// Created by 77469 on 2023/11/30.
//
#include <iostream>

using namespace std;

const double tax1 = 0.1;
const double tax2 = 0.15;
const double tax3 = 0.2;

int main()
{
    cout << "输入你的工资：  " ;
    double tvarp= 0;

    double tax;

    while (tvarp >=0 && cin >> tvarp)
    {
        if (tvarp<=5000)
            tax = 0;
        else if (tvarp>=5001 && tvarp <= 15000)
        {
            tax = (tvarp - 5000) * tax1;
            //cout << "你所需要交税为： " << tax << " tvarp " << endl;
        }
        else if (tvarp>=15001 && tvarp <= 35000)
        {
            tax = 10000 * tax1 + (tvarp - 15000) * tax2;
            //cout << "你所需要交税为： " << tax << " tvarp " << endl;
        }
        else if (tvarp > 35000)
        {
            tax = 10000 * tax1 + 20000 * tax2 + (tvarp - 35000) * tax3;
            //cout << "你所需要交税为： " << tax << " tvarp " << endl;
        }
        cout << "你所需要交税为： " << tax << " tvarp " << endl;
    }
    return 0;

}