//
// Created by 77469 on 2024/1/26.
//

#ifndef CHAPTER13_ACCTABC_H
#define CHAPTER13_ACCTABC_H
#include <iostream>
#include <string>

class AcctABC
{
private:
    std::string fullName;
    long acctNum;
    double balance;
protected:
    struct Formatting
    {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const std::string & FullName() const {return fullName;};
    long AcctNum() const {return acctNum;};
    Formatting SetFormat() const;
    void Restore(Formatting & f)const;
public:
    AcctABC(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt) = 0; //纯虚函数 表示这是一个抽象基类
    double Balance() const {return balance;};
    virtual void ViewAcct() const = 0;
    virtual ~AcctABC() {};
};

//具体类
class Brass :public AcctABC
{
public:
    Brass (const std::string & s = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(s, an, bal) {};
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    virtual ~Brass() {};
};

class BrassPlus :public AcctABC
{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus (const std::string & s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.1);
    BrassPlus (const Brass & ba, double ml=500, double r =0.1);
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);
    void ResetMax(double m) {maxLoan = m;};
    void ResetRate(double r) {rate = r;};
    void ResetOwes() {owesBank = 0;};
};
#endif //CHAPTER13_ACCTABC_H
