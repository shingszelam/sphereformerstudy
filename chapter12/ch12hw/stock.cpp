//
// Created by 77469 on 2024/1/23.
//
#include <iostream>
#include "stock.h"
#include <cstring>
Stock::Stock()
{

    len = 6;
    name = new char [len + 1];
    strcpy(name, "no name");
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const char * pc, long n, double pr)
{
    len = strlen(pc);
    name = new char [len];
    strcpy(name, pc);
    if (n<0)
    {
        std::cout << "Number of shares can't be negative; "
                  << name << "Shares set to 0.\n";
        shares = 0;
    } else shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    delete [] name;
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



const Stock & Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val)
        return s;
    else return *this;
}

ostream & operator<<(ostream & os,  const Stock & pc)
{
    using std::ios_base;
    ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize  prec = os.precision(3);
    os << "Company: " << pc.name << " Shares: " << pc.shares << std::endl
    << "Share price: $" << pc.share_val ;
    os.precision(2);
    os << " Total worth: S"<< pc.total_val << std::endl;
    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
    return os;
}