//
// Created by 77469 on 2023/11/25.
//
#include <iostream>
using namespace std;

int main()
{
    cout << "the amazing accounto will sum and average " ;
    cout << "five number for you \n";
    cout << "pls enter five values: \n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; i++)
    {
        cout << "value" << i << " :" ;
        cin >> number;
        sum += number;
    }
    cout << " five exquisite choice indeed!";
    cout << "they sum to  "<< sum << endl;
    cout << "and average to " << sum / 5 << endl;
    cout << "the amazing accounto bids you adieu! " << endl;

    return 0;
}