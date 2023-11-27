//
// Created by 77469 on 2023/11/26.
//
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "enter the delay time, in seconds: " ;
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)
        ;
    cout << "done \a\n";
    return 0;
}