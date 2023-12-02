//
// Created by 77469 on 2023/12/1.
//
#include <iostream>
void cheers(int);
double cube(double x);
using namespace std;

int main()
{
    cheers(5);
    cout << "give me a number: ";
    double side;
    cin >> side ;
    double volume = cube(side);
    cout << "A "  << side << "-foot cube has a volume of ";
    cout << volume << " cube fett.\n";
    cheers(cube(2));
    return 0;
}

void cheers(int n )
{
    for (int i = 0; i <n; i++)
        cout << "cheers! ";
    cout << endl;
}

double cube(double x)
{
    return x * x * x;
}