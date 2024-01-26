//
// Created by 77469 on 2024/1/18.
//
#include <iostream>
#ifndef CHAPTER12_STRNGBAD_H
#define CHAPTER12_STRNGBAD_H
class StringBad
{
private:
    char * str;
    int len;
    static int num_strings;
public:
    StringBad(const char * s);
    StringBad();
    ~StringBad();

    friend std::ostream & operator<<(std::ostream & os,
            const StringBad & st);

};
#endif //CHAPTER12_STRNGBAD_H
