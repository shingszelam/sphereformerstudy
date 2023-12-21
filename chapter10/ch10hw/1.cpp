//
// Created by 77469 on 2023/12/19.
//
#include <iostream>
#include <cstring>
#include "1.h"

Bank::Bank()
{
    strcpy(name,"no name");
    strcpy(account, "no account");
    deposit = 0.0;
}
Bank::Bank(const char * n , const char * a,const double d)
{
    strcpy(name, n);
    strcpy(account, a);
    deposit = d;
}

Bank::~Bank()
{
    std::cout << "OVER!";
}

void Bank::show() const
{
    using namespace std;
    cout << "The customer name is: " << name ;
    cout << " The account  is: " << account << endl;
    cout << name << " deposit is: $" << deposit << endl;
}
void Bank::input(const double in)
{
    if (in <= 0)
        std::cout << "To save the money must be greater than 0!" << std::endl;
    else deposit+= in;

}
void Bank::output(const double out)
{
    if (out <= 0)
        std::cout << "The money required must be greater than 0!\n";
    else deposit-=0;

}