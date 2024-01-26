//
// Created by 77469 on 2024/1/8.
//
#include <iostream>
#include "6.h"
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;

int main()
{
    Stonewt sta[6] {
        Stonewt(11,3,Stonewt::poufloat),
        Stonewt(142.33),
        Stonewt(10, 11.7,Stonewt::poufloat),
    };
    Stonewt maxst = Stonewt();
    Stonewt minst = sta[0];
    Stonewt lager11[6];
    int count = 0;


    Stonewt bz = Stonewt(11,0);

    std::srand(std::time(0));


    for (int i = 3; i < 6; i++)
    {
        double n1 = std::rand() % 21;
        double n2 = std::rand() % 21;
        sta[i] = Stonewt(n1, n2, Stonewt::poufloat);
    }

    for(int i = 0; i < 6; i++)
    {
        cout << "第" << i << "个" << sta[i] ;
        if (sta[i] >= maxst)
            maxst = sta[i];
        else maxst = maxst;

        if (sta[i] <= minst)
            minst = sta[i];
        else minst = minst;

    }
    cout << "max = " << maxst;
    cout << "min = " << minst;

    for (int i = 0; i < 6 ; i++)
    {
        if (sta[i] >= bz)
        {
            lager11[count] = sta[i];
            count ++;
        } else continue;
    }

    for (int i = 0; i < count; i++)
    {
        cout << "大于11英石的数有： " << lager11[i];
    }

    return 0;



}