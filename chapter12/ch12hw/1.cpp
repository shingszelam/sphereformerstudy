//
// Created by 77469 on 2024/1/21.
//
#include <iostream>
#include <cstring>
#include "1.h"

Cow::Cow()
{
    strcpy(name, "none");
    hobby = new char [strlen("none"+1)];
    strcpy(hobby,"none");
    weight = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
    strcpy(name,nm);
    hobby = new char [strlen(ho)];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c)
{
    strcpy(name, c.name);
    hobby = new char [strlen(c.hobby)];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{

}

Cow &Cow::operator=(const Cow &c)
{
    strcpy(this->name , c.name);
    this->hobby = new char [strlen(c.hobby)];
    strcpy(this->hobby, c.hobby);
    this->weight = c.weight;
    return *this;
}

void Cow::ShowCow() const
{
    using namespace std;
    cout << "name: " << name << " hobby: " << hobby << " weight: " << weight << endl;
}