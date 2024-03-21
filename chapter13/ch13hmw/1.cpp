//
// Created by 77469 on 2024/2/28.
//

#include "1.h"
#include <iostream>
#include <cstring>
using namespace std;

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections =n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}


Cd::~Cd()
{}

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
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return * this;
}

Classic::Classic(const char *s, const char *s1, const char *s2, int n, double x) : Cd(s1, s2, n, x)
{
    strncpy(work, s, 39);
    work[39] = '\0';

}

Classic::Classic(const char *s, const Cd &cs) : Cd(cs)
{
    strncpy(work, s, W_L-1);
    work[W_L-1] = '\0';

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
    strcpy(work, c.work);
    return  * this;
}



