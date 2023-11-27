//
// Created by 77469 on 2023/11/27.
//
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct car
        {
    string name;
    int year;
        };


int main()
{
    cout << "How many cars do you wish to catalog?" ;
    int n ;
    cin >> n;
    car * pc = new car[n];
    for (int i=0; i <n ; ++i)
    {
        cout << "Car #" << i+1 <<": "<< endl ;
        cout << "Please enter the make:";
        cin.get();
        getline(cin,pc[i].name);
        cout << "Please enter the year made:";
        cin >> pc[i].year;
        cin.get();
    }
    cout << "here is your colletion:" << endl;
    for (int i = 0; i<n; ++i)
    {

        cout << pc[i].year <<"\t" << pc[i].name <<endl;
    }
    return 0;
}