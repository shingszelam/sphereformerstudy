//
// Created by 77469 on 2024/1/7.
//
#include <iostream>
#include "2.h"
#include <cmath>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::cout;


namespace VECTOR {
    //弧度转角度
    const double Rad_to_deg = 45.0 / atan(1.0);


    //从极坐标中获得x,y
    void Vector::set_x(double mag, double ang)
    {
        x = mag * cos(ang);
    }

    void Vector::set_y(double mag, double ang) {
        y = mag * sin(ang);
    }

    Vector::Vector() {
        x = y  = 0.0;
        mode = RECT;
    }

    //如果form是r的话则从直角坐标系中获得向量（默认操作）
    //如果form是p的话则从极坐标获得向量
    Vector::Vector(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;

        } else if (form == POL) {
            set_x(n1, n2 /Rad_to_deg);
            set_y(n1, n2 /Rad_to_deg);
        } else {
            cout << "incorrect 3rd argument to vector() -- ";
            cout << "vector set to 0\n";
            x = y  = 0.0;
            mode = RECT;
        }
    }

    //还原操作
    void Vector::reset(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
        } else if (form == POL) {
            set_x(n1, n2 /Rad_to_deg);
            set_y(n1, n2 /Rad_to_deg);
        } else {
            cout << "incorrect 3rd argument to vector() -- ";
            cout << "vector set to 0\n";
            x = y  = 0.0;
            mode = RECT;
        }
    }

    Vector::~Vector() {}

    void Vector::polar_mode() {
        mode = POL;
    }

    void Vector::rect_mode() {
        mode = RECT;
    }


    double Vector::magval() const
    {
        return sqrt(x* x + y * y);
    }

    double Vector::angval() const
    {
        if (x == 0.0 && y == 0.0)
            return 0.0;
        else
            return (atan2(y, x));
    }


    Vector Vector::operator+(const VECTOR::Vector &b) const {
        return Vector(x + b.x, y + b.y);
    }

    Vector Vector::operator-(const VECTOR::Vector &b) const {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-() const {
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const {
        return Vector(n * x, n * y);
    }

    Vector operator*(double n, const Vector &a) {
        return a * n;
    }

    std::ostream &operator<<(std::ostream &os, const Vector &v) {
        if (v.mode == Vector::RECT)
            os << "(x,y) = (" << v.x << " , " << v.y << " )";
        else if (v.mode == Vector::POL) {
            os << "(m,a) = (" << v.magval() << ", " << v.angval() * Rad_to_deg << " )";
        } else
            os << "vector object mode is invalid";
        return os;
    }
}

