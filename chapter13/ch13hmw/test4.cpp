//
// Created by 77469 on 2024/3/1.
//

#include "test4.h"
#include <iostream>
#include <cstring>
using namespace std;

Port::Port(const char *br, const char *st, int b)
{
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port &p)
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port &Port::operator=(const Port &p)
{
    if (this == &p)
        return *this;
    delete [] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port &Port::operator+=(int b)
{
    this->bottles += b;
    return *this;
}

Port &Port::operator-=(int b)
{
    this->bottles -= b;
    return *this;
}

void Port::Show() const
{

    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottels: " << bottles << endl;

}

ostream &operator<<(ostream & os, const Port & p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y) : Port(br,"Vintage", b)
{
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort &vp)
{
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort::VintagePort()
{
    Port("none","Vintage",0);
    strcpy(nickname, "null");
    year = 0;
}

VintagePort &VintagePort::operator=(const VintagePort &vp)
{
    if (this == &vp)
        return *this;
    Port::operator=(vp);
    delete [] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp)
{
    //Port::operator=(vp);--错误的表达方式
    os << (const Port &) vp;
    os << ", " << vp.nickname << ", " << vp.year;
    return os;
}
