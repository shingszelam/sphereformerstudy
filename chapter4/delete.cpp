//
// Created by 77469 on 2023/11/23.
//
//大型数组输入并分配内存
#include <iostream>
#include <cstring>
using namespace std;

char * getnamed(void);

int main()
{
    char * name;

    name = getnamed();
    cout << name << " at " << (int *) name << endl;
    delete [] name;

    name = getnamed();
    cout << name << " at " << (int *) name << endl;
    delete [] name;

    return 0;

}

char * getnamed()
{
    char temp[80];
    cout << "enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1]; //使用New为输入开辟一个空间
    strcpy(pn, temp);//将temp的东西送到pn所指定的位置中去

    return pn;
}