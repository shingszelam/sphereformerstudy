//
// Created by 77469 on 2024/2/29.
//
#include "attcabc3.h"
#include <iostream>
#include <cstring>
using namespace std;

ATTCabc::ATTCabc(const char *l, int r)
{
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

ATTCabc::ATTCabc(const ATTCabc &as)
{
    label = new char[strlen(as.label) + 1];
    strcpy(label, as.label);
    rating = as.rating;
}

ATTCabc::~ATTCabc()
{
    delete [] label;
}

ATTCabc &ATTCabc::operator=(const ATTCabc &as)
{
    if (this == &as)
        return *this;
    delete [] label;
    label = new char[strlen(as.label) +1];
    strcpy(label, as.label);
    rating = as.rating;
    return *this;
}

void ATTCabc::View()
{
    cout << "Label: " << label << endl;
    cout << "Rating: " << rating << endl;
}

lacksDMA::lacksDMA(const char *c, const char *l, int r) : ATTCabc(l,r)
{
    strncpy(color, c,39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char *c, const ATTCabc &as) : ATTCabc(as)
{
    std::strncpy(color, c, COL_LEN -1);
    color[COL_LEN -1 ] = '\0';
}

void lacksDMA::View()
{
    ATTCabc::View();
    cout << "Color: " << color << endl;
}

hasDMA::hasDMA(const char *s, const char *l, int r) : ATTCabc(l,r)
{
    style = new char[strlen(s)+1];
    strcpy(style,s);
}

hasDMA::hasDMA(const char *s, const ATTCabc &rs) : ATTCabc(rs)
{
    style = new char[strlen(s)+1];
    strcpy(style,s);
}

hasDMA::hasDMA(const hasDMA &hs) : ATTCabc(hs)
{
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA &rs)
{
    if (this == &rs)
        return *this;
    ATTCabc::operator=(rs);
    delete [] style;
    style = new char[strlen(rs.style) +1];
    strcpy(style, rs.style);
    return *this;
}

void hasDMA::View()
{
    ATTCabc::View();
    cout << "Style: " << style << endl;
}