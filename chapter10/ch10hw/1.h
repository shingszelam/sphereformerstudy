//
// Created by 77469 on 2023/12/19.
//

#ifndef CH10HW_5_H
#define CH10HW_5_H
#include <string>

class Bank
{
private:
    char name[20];
    char account[20];
    double deposit;
public:
    Bank();
    Bank(const char * n , const char * a, const double d);
    ~Bank();
    void show() const;
    void input(const double in);
    void output(const double out);
};
#endif //CH10HW_5_H
