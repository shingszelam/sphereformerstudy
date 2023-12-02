//
// Created by 77469 on 2023/12/2.
//
#include <iostream>
#include <array>
#include <string>

using namespace std;

const int seasons = 4;
const array<string , seasons> snames={"spring", "summer", "fall", "winter"};

void fill(array<double, seasons> * pa);
void show(array<double, seasons> da);

int main()
{
    array<double, seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(array<double, seasons> * pa)
{
    for (int i = 0; i < seasons; i++)
    {
        cout << "enter " << snames[i] << " expenses: " ;
        cin >> (*pa)[i];
    }
}

void show(array<double, seasons> da)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i <seasons; i ++)
    {
        cout << snames[i] << ":$" << da[i] << endl;
        total += da[i];
    }
    cout << "total expenses:$ " << total << endl;
}