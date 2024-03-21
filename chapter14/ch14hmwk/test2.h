//
// Created by 77469 on 2024/3/11.
//

#ifndef CH14HMWK_TEST2_H
#define CH14HMWK_TEST2_H

#include <iostream>
#include <string>
#include <valarray>

template <class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    T1  & first();
    T2 & second();
    T1 first() const { return  a;}
    T2 second() const {return b;}
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) {}
    Pair() {}
};

template<class T1, class T2>
T1 & Pair<T1, T2>::first()
{
    return a;
}

template<class T1, class T2>
T2 &Pair<T1, T2>::second()
{
    return b;
}


typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
class Wine2 : private PairArray
{
private:
    std::string name;
    int year;
public:
    Wine2(const char * a, const int & y);
    Wine2(const char * c, const int & y, const int a[], const int b[]);
    std::string & Label() {return name;};
    void GetBottles();
    void Show();
    int sum();

};


#endif //CH14HMWK_TEST2_H
