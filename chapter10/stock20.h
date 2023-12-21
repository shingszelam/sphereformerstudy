//
// Created by 77469 on 2023/12/18.
//

#ifndef CHAPTER10_STOCK20_H
#define CHAPTER10_STOCK20_H
#include <string>
class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot () {total_val = shares * share_val;}
public:
    //构造函数
    Stock();
    Stock(const std::string &co, long n =0, double pr = 0.0);
    //析构函数
    ~Stock();
    //void acquire(const std::string& co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const; //增加了const 保证show函数不修改对象
    const Stock & topval(const Stock & s) const;//返回股票票价最高的函数
};

#endif //CHAPTER10_STOCK20_H
