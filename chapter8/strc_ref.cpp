//
// Created by 77469 on 2023/12/10.
//
#include <iostream>
#include <string>
using namespace std;

struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);

int main()
{
    //部分初始化，保持元素为0
    free_throws one = {"ifelsa branch", 13, 14};
    free_throws two = {"andor knott", 10, 16};
    free_throws three = {"minnie max", 7, 9};
    free_throws four = {"whily looper", 5, 9};
    free_throws five = {"long long", 6, 14};
    free_throws team = {"throwgoods", 0, 0};

    //不初始化
    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);

    //使用返回值作为一个参数
    display(accumulate(team,two));//将计算的结果直接返回到display函数中
    accumulate(accumulate(team,three), four);
    display(team);//累计费用

    //use return value in assignment
    dup = accumulate(team,five);
    cout << "display team:\n";
    display(team);
    cout << "displaying dup after assignment:\n";
    display(dup);
    set_pc(four);

    //ill-advised assignment
    accumulate(dup, five) = four;
    cout << "displaying dup after ill-assignment:\n";
    display(dup);
    return 0;
}

void display(const free_throws & ft)
{
    cout << "name: " << ft.name << endl;
    cout << " made: " << ft.made << '\t';
    cout << "attempts: " << ft.attempts << '\t';
    cout << "percent: " << ft.percent << endl;
}

void set_pc(free_throws & ft)
{
    if(ft.attempts != 0)
        ft.percent = 100.0f * float (ft.made) /float (ft.attempts);
    else
        ft.percent = 0;
}

free_throws & accumulate(free_throws & target, const free_throws & source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}