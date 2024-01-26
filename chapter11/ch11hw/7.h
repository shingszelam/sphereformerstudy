//
// Created by 77469 on 2024/1/8.
//

#ifndef CH11HW_7_H
#define CH11HW_7_H
#include <iostream>
class Complexcsl
{
private:
    double real;
    double imaginary;

public:
    Complexcsl(double a, double b);
    Complexcsl();
    ~Complexcsl();
    Complexcsl operator*(const Complexcsl & c) const;

    friend Complexcsl operator+(const Complexcsl & c1, const Complexcsl & c2);
    friend Complexcsl operator-(const Complexcsl & c1, const Complexcsl & c2);
    friend Complexcsl operator*(double n, const Complexcsl & c2);
    friend Complexcsl operator~(const Complexcsl & c);

    friend std::ostream & operator<<(std::ostream &os, const Complexcsl &c);
    friend std::istream & operator>>(std::istream &is, Complexcsl &c);

};
#endif //CH11HW_7_H
