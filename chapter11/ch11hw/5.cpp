//
// Created by 77469 on 2024/1/8.
//
#include <iostream>
#include "5.h"

using std::cout;

Stonewt::Stonewt(double lbs, Stat stat1) //将double类型转换成stone类型
{
    stat = stat1;//一定要有这个 不然变量的状态是不会发生改变的
    pounds = lbs;
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    if (stat1 == pouint)
        pounds = int(lbs);
    else if (stat1 == sto)
    {   stone = int (lbs) / Lbs_per_stn;
        pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    }

}

Stonewt::Stonewt(int stn, double lbs, Stat stat2) {
    stat = stat2;
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    if (stat2 == poufloat)
        pounds = stn * Lbs_per_stn + lbs;
    else if (stat2 == pouint)
        pounds = stn * Lbs_per_stn + int(lbs);
}//接受两个参数 因此不能用于转换 但是将第二个参数设置成lbs=0即默认参数时，则可将整数类型stn转换成stone类型

Stonewt::Stonewt() {
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() {
}

Stonewt operator+( Stonewt & s1,  Stonewt  & s2)
{
    Stonewt ssum;
    ssum.stat = s1.stat;
    if (s1.stat == s2.stat)
    {
        if (s1.stat == Stonewt::poufloat || s1.stat == Stonewt::pouint)
            ssum = s1 + s2;
        else if (s1.stat == Stonewt::sto) {
            ssum.pds_left =s1.pds_left + s2.pds_left;
            ssum.stone = s1.stone + s2.stone;
            if (ssum.pds_left >= Stonewt::Lbs_per_stn)
            {
                ssum.stone + 1;
                ssum.pds_left -= Stonewt::Lbs_per_stn;
            }
        }
    } else
    {
        double pounds1 = (s1.stat == Stonewt::sto) ? s1.stone * Stonewt::Lbs_per_stn + s1.pds_left : s1.pounds;
        double pounds2 = (s2.stat == Stonewt::sto) ? s2.stone * Stonewt::Lbs_per_stn + s2.pds_left : s2.pounds;
        ssum.pounds = pounds1 + pounds2;

        // 将总重量转换为 sto 状态
        ssum.stone = ssum.pounds / Stonewt::Lbs_per_stn;
        ssum.pds_left = int(ssum.pounds) % Stonewt::Lbs_per_stn + ssum.pounds - int(ssum.pounds);
    }
    return ssum;
}

Stonewt operator-( Stonewt & s1,  Stonewt & s2)
{
    Stonewt diff;
    diff.stat = s1.stat;
    diff.pounds = s1.pounds - s2.pounds;
    diff.stone = int(diff.pounds) / Stonewt::Lbs_per_stn;
    diff.pds_left = int(diff.pounds) % Stonewt::Lbs_per_stn + diff.pounds - int(diff.pounds);
    if (diff.stat == Stonewt::pouint)
        diff.pounds = int(diff.pounds);
    return diff;
}

Stonewt operator*(double n ,  Stonewt & s)
{
    s.pounds = n* s.pounds;
    s.stone = s.pounds / Stonewt::Lbs_per_stn;
    s.pds_left = int(s.pounds) % Stonewt::Lbs_per_stn + s.pounds - int(s.pounds);
    if (s.stat == Stonewt::pouint)
        s.pounds = int (s.pounds);
    return s;
}

Stonewt operator/(double n ,  Stonewt & s)
{
    s.pounds = s.pounds / n;
    s.stone = s.pounds / double (Stonewt::Lbs_per_stn);
    s.pds_left = int(s.pounds) % Stonewt::Lbs_per_stn + s.pounds - int(s.pounds);
    if (s.stat == Stonewt::pouint)
        s.pounds = int(s.pounds);
    return s;

}

std::ostream &operator<<(std::ostream & os, const Stonewt &s)
{
    if (s.stat == Stonewt::poufloat)
        os << "英镑的浮点格式： " << s.pounds << " pounds" << std::endl;
    else if(s.stat == Stonewt::pouint)
        os << "英镑的整数格式： " << int(s.pounds) << " pounds" << std::endl;
    else os << s.stone << " stone, " << s.pds_left << "pounds ." << std::endl;
    return os;

}