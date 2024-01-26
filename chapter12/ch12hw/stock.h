//
// Created by 77469 on 2024/1/23.
//

#ifndef CHAPTER12_STOCK_H
#define CHAPTER12_STOCK_H
#include <iostream>
using  std::ostream;
class Stock
{
private:
    char * name;
    int len;
    long shares;
    double share_val;
    double total_val;
    void set_tot () {total_val = shares * share_val;}
public:
    //构造函数
    Stock();
    Stock(const char * pc, long n =0, double pr = 0.0);
    //析构函数
    ~Stock();
    //void acquire(const std::string& co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    //void show() const; //增加了const 保证show函数不修改对象
    const Stock & topval(const Stock & s) const;//返回股票票价最高的函数

    friend ostream & operator<<(ostream & os, const Stock & s);
};
#endif //CHAPTER12_STOCK_H
