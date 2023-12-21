//
// Created by 77469 on 2023/12/19.
//

#include <iostream>
#include "6.h"

Move::Move()
{
    x =0;
    y =0;
}

Move::Move(double  a, double b)
{
    x = a;
    y = b;
}
void Move::showmove() const
{
    using namespace std;
    cout << "x: " << x << " y: " << y << endl;
}

Move Move::add(const Move & M)
{
    Move newm;
    newm.x = this->x + M.x;
    newm.y = this->y + M.y;
    return newm;
}

void Move::reset(double a , double b)
{
    x= a;
    y=b;
}