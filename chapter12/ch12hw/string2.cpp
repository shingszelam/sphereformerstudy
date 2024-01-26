//
// Created by 77469 on 2024/1/21.
//
#include <cstring>
#include <cctype>
#include "string2.h"

using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}

String::String(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str,s);
    num_strings++;
}

String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str, st.str);
}

String::~String()
{
    --num_strings;
    delete [] str;
}


//重载操作方法
//赋值
String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

//赋值另一种
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    return *this;
}

String String::operator+(const String & s) const
{
    String result;
    result.len = len + s.len;
    result.str = new char[result.len + 1];

    // 复制第一个字符串
    strcpy(result.str, str);

    // 追加第二个字符串
    strcat(result.str, s.str);

    return result;
}

String operator+(const char* c, const String& s)
{
    String result;
    result.len = strlen(c) + s.len;
    result.str = new char[result.len + 1];
    // 复制第一个字符串
    strcpy(result.str, c);
    // 追加第二个字符串
    strcat(result.str, s.str);
    return result;
}



char & String::operator[](int i)
{
    return str[i];
}

const char & String::operator[](int i) const
{
    return str[i];
}

void String::Stringlow()
{
    len = strlen(str);
    int i =0;
    for (i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);
    }
};


void String::Stringmax()
{
    len = strlen(str);
    int i ;
    for (i = 0; i < len; i++)
    {
        str[i] = toupper(str[i]);
    }
}

int String::has(const char c)
{
    int count=0;
    len = strlen(str);
    for (int i = 0; i < len; i ++)
    {
        if (str[i] == c)
            count++;
        else
            count;
    }
    return count;
}





bool operator<(const String & st1, const String & st2)
{
    return (std::strcmp(st1.str, st2.str) <  0);
}

bool operator>(const String & st1, const String & st2)
{
    return st2<st1;
}

bool operator==(const String & st1, const String & st2)
{
    return (std::strcmp(st1.str, st2.str) ==0);
}

ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os;
}

istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;

}