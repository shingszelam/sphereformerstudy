//
// Created by 77469 on 2024/1/3.
//

#ifndef CHAPTER11_STONEWT1_H
#define CHAPTER11_STONEWT1_H
class Stonewt
{
private:
    enum {Lbs_per_stn =14};
    int stone;
    double pds_left;
    double pounds;

public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_sth() const;
    //转换函数的类形式
    operator int() const;
    operator double() const;
};
#endif //CHAPTER11_STONEWT1_H
