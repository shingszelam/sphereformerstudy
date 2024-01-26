//
// Created by 77469 on 2024/1/8.
//

#ifndef CH11HW_5_H
#define CH11HW_5_H
#include <iostream>


class Stonewt
{
public:
    enum Stat{sto, pouint, poufloat};
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
    Stat stat;
public:
    Stonewt(double lbs, Stat form = poufloat);
    Stonewt(int stn, double lbs, Stat form = sto);
    Stonewt();
    ~Stonewt();

    friend Stonewt operator+( Stonewt & s1,  Stonewt & s2);
    friend Stonewt operator-( Stonewt & s1,  Stonewt & s2);
    friend Stonewt operator*(double n ,  Stonewt & s);
    friend Stonewt operator/(double n ,  Stonewt & s);

    friend std::ostream &operator<<(std::ostream & os, const Stonewt &s);


    //void show_lbs() const;
    //void show_sth() const;
};
#endif //CH11HW_5_H
