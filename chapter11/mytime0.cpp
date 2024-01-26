//
// Created by 77469 on 2024/1/2.
//
#include <iostream>
#include "mytime0.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int min)
{
    hours = h;
    minutes = min;
}

void Time::addMin(int m)
{
    minutes += m;
    hours  += minutes/60;
    minutes %= 60;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time Time::Sum(const Time &t) const
{
    Time sum;
    sum.minutes = minutes+t.minutes;
    sum.hours = hours + t.hours + sum.minutes/60;
    sum.minutes %= 60;
    return sum;
}

void Time::show() const
{
    std::cout << hours << " hours, " << minutes << " minutes";
}

