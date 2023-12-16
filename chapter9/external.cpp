//
// Created by 77469 on 2023/12/16.
//
#include <iostream>

using namespace std;

double warming = 0.3;

void update(double dt);
void local();

int main()
{
    cout << "global warming is " << warming << " degress.\n";
    update(0.1);
    cout << "global warming is " << warming << " degress.\n";
    local();
    cout << "global warming is " << warming << " degress.\n";
    return 0;
}