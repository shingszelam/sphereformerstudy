//
// Created by 77469 on 2023/12/18.
//
#include <iostream>
#include "stock20.h"

Stock::Stock()
{
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    company = co;
    if (n<0)
    {
        std::cout << "Number of shares can't be negative; "
                  << company << "Shares set to 0.\n";
        shares = 0;
    } else shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{

}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    } else
    {
        shares += num;
        share_val = price;
        set_tot();
    }

}

void Stock::sell(long num, double price)
{
    using std::cout ;
    if (num<0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";

    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    } else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);//不使用科学计数法 而是使用小数表示
    std::streamsize  prec = cout.precision(3); //显示三位小数
    std::cout << "Company: " << company
              << " Shares: " << shares << std::endl
              << "Shares price: $"  << share_val;
    cout.precision(2);
    cout << " Total Worth: $" << total_val << '\n';
    cout.setf(orig, ios_base::floatfield);
    cout .precision(prec);
}

const Stock & Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val)
        return s;
    else return *this;
}