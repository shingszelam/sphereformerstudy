//
// Created by 77469 on 2023/12/19.
//

#include <iostream>
#include "2.h"
#include <cstring>

Person::Person()
{
    lname = "";
    fname[0] = '\0';
}
Person::Person(const std::string & ln, const char * fn )
{
    if (ln != "")
    {
        lname = ln;
        if (fn[0] == '\0')
            strcpy(fname, "heyyou");
        else strcpy(fname, fn);
    }
}

void Person::Show() const
{
    using namespace std;
    cout << fname << " " <<lname << endl;
}
void Person::FormalShow() const
{
    using std::cout;
    cout << lname << ", " << fname << std::endl;
}