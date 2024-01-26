//
// Created by 77469 on 2024/1/7.
//
#include <iostream>
#include "4.h"

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

Time Time::operator+(const Time &t) const
{
    Time sum;
    sum.minutes = minutes+t.minutes;
    sum.hours = hours + t.hours + sum.minutes/60;
    sum.minutes %= 60;
    return sum;
}//可以像Mytime0中的sum函数那样调用这个函数也可以直接对Time类操作

Time Time::operator-(const Time &t) const
{
    Time diff;
    int to1, to2;
    to1 = t.minutes + 60 * t.hours;
    to2 = minutes + 60 * hours;
    diff.minutes = (to2 - to1) % 60;
    diff.hours = (to2 - to1) /60;
    return diff;
}

Time Time::operator*(double mult) const
{
    Time result;
    long totalminutes = hours * mult * 60 + minutes * mult;
    result.hours = totalminutes /60;
    result.minutes = totalminutes % 60;
    return result;
}

Time operator+(const Time & t1, const Time & t2)
{
    Time sum;
    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = t1.hours + t2.hours + sum.minutes/60;
    sum.minutes = sum.minutes % 60;
    return sum;
}

Time operator-(const Time & t1, const Time & t2)
{
    Time diff;
    diff.minutes = ((t1.hours * 60  + t1.minutes )  - (t1.hours * 60  + t1.minutes ))% 60;
    diff.hours =((t1.hours * 60  + t1.minutes )  - (t1.hours * 60  + t1.minutes )) / 60;
    return diff;

}
std::ostream & operator<<(std::ostream & os, const Time & t)
{
    os << t.hours << " hours, " << t.minutes << " miniutes";
    return os;
}
