//
// Created by 77469 on 2024/1/3.
//
#include <iostream>
#include "stonewt.h"

using std::cout;

Stonewt::Stonewt(double lbs) //将double类型转换成stone类型
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}//接受两个参数 因此不能用于转换 但是将第二个参数设置成lbs=0即默认参数时，则可将整数类型stn转换成stone类型

Stonewt::Stonewt() {
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() {
}

void Stonewt::show_sth() const {
    cout << stone << " stone, " << pds_left << " pounds\n";
}

void Stonewt::show_lbs() const {
    cout << pounds << " pounds\n";
}