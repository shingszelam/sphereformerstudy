//
// Created by 77469 on 2023/12/17.
//

#ifndef CH9HW_NAMESP_H
#define CH9HW_NAMESP_H
namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    //从array中拷贝少于4份或者n份条目到sales成员中并且存储他们 计算它们的平均值 最大值和最小值
    //如果没有 则为0;
    void setSales(Sales & s, const double ar[], int n);
    void setSales(Sales & s);
    void showSales(const Sales & s);
}

#endif //CH9HW_NAMESP_H
