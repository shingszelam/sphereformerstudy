//
// Created by 77469 on 2023/12/19.
//
#include <iostream>
#include <cstring>
#include "3.h"

Golf::Golf()
{
    strcpy(fullname,"nobody");
    handicap =0;
}

Golf::Golf(const char * name, int hc)
{
    strcpy(fullname,name);
    handicap = hc;
}
void Golf::hdcp(int hc)
{
    handicap = hc;
}
void Golf::show() const
{
    using namespace std;
    cout << "用户姓名为： "<< fullname <<" \t"
    << "用户等级为： " << handicap << endl;
}

const Golf & Golf::setgolf (const Golf & s)
{
    if (strlen(s.fullname) !=0 && s.fullname[0] != ' ')
    {
        strcpy(this->fullname, s.fullname);
        this->handicap = s.handicap;
    }
    else std::cout << "输入结束。";
    return *this;
}