//
// Created by 77469 on 2024/1/21.
//

#ifndef CHAPTER12_STRING2_H
#define CHAPTER12_STRING2_H
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;

public:
    String (const char * s);
    String();
    String(const String &);
    ~String();
    int length () const {return len;}
    String & operator=(const String &);
    String & operator=(const char *);
    String operator+( const String & ) const;
    friend String operator+(  const char * ,  const String & );
    char & operator[](int i);
    const char & operator[](int i) const;

    void Stringlow(); //变成小写都
    void Stringmax(); //变成大写都
    int has(const char );

    friend bool operator<(const String & st, const String &st2);
    friend bool operator>(const String & st1, const String &st2);
    friend bool operator==(const String & st, const String &st2);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is,  String & st);

    static int HowMany();

};
#endif //CHAPTER12_STRING2_H
