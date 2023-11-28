//
// Created by 77469 on 2023/11/28.
//
#include <iostream>

using namespace std;

const int Max = 5;

int main()
{
    double fish[Max];
    cout << "please enter the weights of your fish.\n";
    cout << "you may enter up to " <<Max
    << " fish < q to terminate>.\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i])
    {
        if (++i < Max)
            cout << "fish #" << i+1 << ": ";
    }

    double total = 0.0;
    for (int j = 0; j < i; ++j) {
        total += fish[j];
    }
    if (i==0)
        cout << "no fish\n";
    else
        cout << total/i << " = average weight of "
        << i << " fish\n";
    return 0;

}