//
// Created by 77469 on 2023/12/7.
//
#include <iostream>
#include <array>
#include <string>

using namespace std;

const int seasons = 4;
const char sname[seasons][10] = {"spring", "summer", "fall", "winter"};
const char (*ps)[10] = &sname[0]; //设置一个包含是个字符串的指针！！！
double price[seasons];

struct pricestr
{
    double pri[seasons];
};


void fill(double * );
void show(double da[], int size);
void show2(pricestr ,int size);
pricestr fill2(pricestr ,int size);

int main()
{
    //fill(price);
    //show(price, seasons);
    pricestr xf;
    xf = fill2(xf, seasons);
    show2(xf, seasons);

}

void fill(double * pa)
{
    for (int i = 0; i < seasons; i++)
    {
        cout << "enter " << *(ps+i) << " expenses: " ;
        cin >> pa[i];
    }
}

pricestr fill2(pricestr xiaofei, int size)
{
    for (int i = 0; i < size ; i++)
    {
        cout << "enter " << * (ps+i) << " expenses: ";
        cin >> xiaofei.pri[i];
    }
    return xiaofei;
}

void show(double da[], int size)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";

    for (int i = 0; i <seasons; i ++)
    {
        cout << *(ps+i) << ":$" << da[i] << endl;
        total += da[i];
    }
    cout << "total expenses:$ " << total << endl;
}

void show2(pricestr xiaofei, int size)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";

    for (int i = 0; i <size; i++)
    {
        cout << *(ps+i) << ":$" << xiaofei.pri[i] << endl;
        total += xiaofei.pri[i];
    }
    cout << "total expenses:$ " << total << endl;
}