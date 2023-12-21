//
// Created by 77469 on 2023/12/19.
//
#include <iostream>
#include "6.h"

int main()
{
    using namespace std;
    Move m1 ;
    m1.showmove();

    Move m2[4]={
            {1,2},
            {3,4},
            {5,6},
            {7,8}
    };
    for (int i = 0; i < 3; i++)
    {
        m1=m2[i].add(m2[i+1]);
        m1.showmove();
    }
    m1.reset();
    m1.showmove();

    return 0;
}