//
// Created by 77469 on 2023/11/24.
//
#include <iostream>
using namespace std;

struct antarctica_years_end
{
    int year;
};

int main()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end * pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3]; //结构数组 包含三个元素
    trio[0].year = 2003;
    cout << trio->year << endl;
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03}; //一个指向antarctia_years_end结构的指针数组
    cout << arp[1]->year << endl;
    const antarctica_years_end ** ppa = arp;
    auto ppb = arp;
    cout << (*ppa)->year << endl;
    cout << (*(ppb+1))->year << endl;

    return 0;
}