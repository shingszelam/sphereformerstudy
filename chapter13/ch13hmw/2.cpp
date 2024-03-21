//
// Created by 77469 on 2024/2/29.
//
#include "2.h"
#include <iostream>
#include <cstring>
using namespace std;

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    performers = new char[strlen(s1) + 1];
    label = new char[strlen(s2) + 1];
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}


Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}

void Cd::Report() const
{
    cout << "Performers is " << performers << endl;
    cout << "Label is " << label << endl;
    cout << "Selection: " << selections << " Playtime: " << playtime;
    cout << endl;
}

Cd &Cd::operator=(const Cd &d)
{
    if (this == &d)
        return *this;
    delete [] performers;
    delete [] label;
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return * this;
}

Classic::Classic(const char *s, const char *s1, const char *s2, int n, double x) : Cd(s1, s2, n, x)
{
    work = new char[strlen(s )+ 1];
    strcpy(work, s);

}

Classic::Classic(const char *s, const Cd &cs) : Cd(cs)
{
    work = new char[strlen(s )+ 1];
    strcpy(work, s);

}

void Classic::Report() const
{
    cout << "Work is " << work << endl;
    Cd::Report();
    cout << endl;
}

Classic &Classic::operator=(const Classic &c)
{
    if (this == &c)
        return *this;
    Cd::operator=(c);
    delete [] work;
    work = new char[strlen(c.work) + 1];
    strcpy(work, c.work);
    return  * this;
}

Classic::~Classic()
{
    delete [] work;
}

Classic::Classic(const Classic &cs) : Cd(cs) //将cs作为引用传递给CD(const CD & cs)中
{
    work = new char[strlen(cs.work) + 1];
    strcpy(work, cs.work);
}