//
// Created by 77469 on 2023/12/17.
//
#include <iostream>
#include "golf.h"
#include <cstring>

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname,name); //char字符数组不可以使用“=”直接赋值
    g.handicap = hc;

}

//判断是否有名字输入
int setgolf(golf & g)
{
    using std::cin;
    if (strlen(g.fullname) != 0 && g.fullname[0] != ' ')
        return 1;
    else return 0;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    using std::cout;
    using std::endl;
    cout << "用户姓名为: " << g.fullname << "\t"
    << "用户等级为" << g.handicap << endl;
}
