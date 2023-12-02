//
// Created by 77469 on 2023/12/1.
//
#include <iostream>

using namespace std;

long double probility(unsigned numbers, unsigned picks);

int main()
{
    double total, choices;
    cout << "enter the total number of choices on the game card and\n"
            "the number of picks allowed : \n";
    while ((cin>>total >>choices) && choices<= total)
    {
        cout << "you have one chance in ";
        cout << probility(total,choices);
        cout << " of wining.\n";
        cout << "next two numbers (q to quit: ";

    }
    cout << "bye\n";
    return 0;
}

long double probility(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--,p-- )
        result = result * n/p;
    return result;
}