//
// Created by 77469 on 2023/11/27.
//
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter numbers ; enter 0 to quit" << endl;
    //cin >> n;
    int count = 0;
    do
    {
        cin >>n;
        count += n;
        cout << "目前输入值累计为" << count << endl ;
    }
    while(n !=0 );


    return 0;
}