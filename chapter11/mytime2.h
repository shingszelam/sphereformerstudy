//
// Created by 77469 on 2024/1/2.
//

#ifndef CHAPTER11_MYTIME2_H
#define CHAPTER11_MYTIME2_H
//其余运算符重载
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
    void show() const;
};
#endif //CHAPTER11_MYTIME2_H
