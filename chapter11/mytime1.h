//
// Created by 77469 on 2024/1/2.
//

#ifndef CHAPTER11_MYTIME1_H
#define CHAPTER11_MYTIME1_H
//运算符重载用法
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
    void show() const;
};


#endif //CHAPTER11_MYTIME1_H
