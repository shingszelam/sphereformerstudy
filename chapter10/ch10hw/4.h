//
// Created by 77469 on 2023/12/19.
//
#ifndef CH10HW_4_H
#define CH10HW_4_H
class Sales
{
private:
    static const int QUARTERS = 4;
    double sales[QUARTERS];
    double max;
    double min;
    double average;
public:
    Sales();
    Sales(double arr[], int n);
    void showSales() const ;

};
#endif //CH10HW_4_H
