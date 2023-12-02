//
// Created by 77469 on 2023/12/2.
//
#include <iostream>

using namespace std;

unsigned int c_in_str(const char * str, char ch);

int main()
{
    char mmm[15] = "minimum";

    char  *wail = "ululate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');

    cout << ms << " m charactter in " << mmm << endl;
    cout << us << " u charactter in " << wail << endl;

    return 0;
}

unsigned int c_in_str(const char * str, char ch)
{
    unsigned int count = 0;
    while (*str) //当str = '\0'的时候退出
    {
        if (*str == ch)
            count++;
        str++;
    }
    return count;

}