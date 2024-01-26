//
// Created by 77469 on 2024/1/3.
//
#include <cmath>
#include "vect.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::cout;


namespace VECTOR {
    //弧度转角度
    const double Rad_to_deg = 45.0 / atan(1.0);

    //从x,y中计算magnitude(幅值)
    void Vector::set_mag() {
        mag = sqrt(x * x + y * y);
    }

    void Vector::set_ang() {
        if (x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
    }

    //从极坐标中获得x,y
    void Vector::set_x() {
        x = mag * cos(ang);
    }

    void Vector::set_y() {
        y = mag * sin(ang);
    }

    Vector::Vector() {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }

    //如果form是r的话则从直角坐标系中获得向量（默认操作）
    //如果form是p的话则从极坐标获得向量
    Vector::Vector(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        } else if (form == POL) {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        } else {
            cout << "incorrect 3rd argument to vector() -- ";
            cout << "vector set to 0\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }

    //还原操作
    void Vector::reset(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        } else if (form == POL) {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        } else {
            cout << "incorrect 3rd argument to vector() -- ";
            cout << "vector set to 0\n";
            x = y = mag = ang = 0.0;
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
            os << "(m,a) = (" << v.mag << ", " << v.ang * Rad_to_deg << " )";
        } else
            os << "vector object mode is invalid";
        return os;
    }
}