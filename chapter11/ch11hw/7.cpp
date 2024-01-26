//
// Created by 77469 on 2024/1/8.
//
#include <iostream>
#include "7.h"

Complexcsl::Complexcsl(double a, double b)
{
    real = a;
    imaginary = b;
}
Complexcsl::Complexcsl()
{
    real = 0;
    imaginary = 0;
}
Complexcsl::~Complexcsl()
{}

Complexcsl Complexcsl::operator*(const Complexcsl & c) const
{
    Complexcsl multi;
    multi.real = this->real * c.real-this->imaginary* c.imaginary;
    multi.imaginary = this->real * c.imaginary + this->imaginary * c.real;
    return multi;

}

Complexcsl operator+(const Complexcsl & c1, const Complexcsl & c2)
{
    Complexcsl add1;
    add1.real = c1.real + c2.real;
    add1.imaginary = c1.imaginary + c2.imaginary;
    return add1;
}


Complexcsl operator-(const Complexcsl & c1, const Complexcsl & c2)
{
    Complexcsl diff;
    diff.real = c1.real - c2.real;
    diff.imaginary = c1.imaginary - c2.imaginary;
    return diff;
}

Complexcsl operator*(double n, const Complexcsl & c2)
{
    Complexcsl multi;
    multi.real = n * c2.real;
    multi.imaginary = n * c2.imaginary;
    return multi;
}

Complexcsl operator~(const Complexcsl & c)
{
    Complexcsl conjugate ;
    conjugate.real = c.real;
    conjugate.imaginary = -c.imaginary;
    return conjugate;
}


std::ostream  & operator<<(std::ostream & os , const Complexcsl &c)
{
    os << "( " << c.real << ", " << c.imaginary << "i "<< ")";
    return os;
}

std::istream  & operator>>(std::istream & input ,  Complexcsl &c)
{
    std::cout << "real:";
    input >> c.real;
    std::cout << "imaginary:";
    input >> c.imaginary;
    return input;
}
