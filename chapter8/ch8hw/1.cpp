//
// Created by 77469 on 2023/12/12.
//
#include <iostream>
using namespace std;

//void show(char * str);
void show(char * str, int n=1);

int main()
{
    char st1[20];
    cin.get(st1, 20);
    show(st1);
    show(st1,100);
    show(st1,200);
    return 0;
}


void show(char * str, int n)
{
    static int count = 0;
    count++;
    if (n==1) cout << str << endl ;
    else
        for (int i=0; i< count ; i++)
            cout << str << endl;
}//其实这里还是显示的是n次

