//
// Created by 77469 on 2024/1/2.
//

#ifndef CHAPTER11_MYTIME3_H
#define CHAPTER11_MYTIME3_H
#include <iostream>
class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void addMin(int m);
    void addHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time& t) const;//加号重载
    Time operator-(const Time& t) const;//减号重载
    Time operator*(const double mult) const;//乘号重载
    friend Time operator*(double m, const Time & t)
    {return t*m;};
    friend std::ostream & operator<<(std::ostream & os, const Time & t);//使用友元函数替代show函数

};

#endif //CHAPTER11_MYTIME3_H
