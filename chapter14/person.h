//
// Created by 77469 on 2024/3/21.
//

#ifndef CHAPTER14_PERSON_H
#define CHAPTER14_PERSON_H

#include <iostream>

using namespace std;
class Person
{
private:
    std::string fname;
    std::string lname;
public:
    Person() : fname("none"), lname("none") {};
    Person(const string & s1, const string & s2) : fname(s1), lname(s2) {};
    Person(const Person & p);
    virtual ~Person()  = 0 ;
    virtual void Show() const {cout << "He/She name is: " << lname << ", " << fname << endl;}
};

class Gunslinger : virtual public Person
{
private:
    double Gtime;
    int kh;
public:
    Gunslinger() : Person(), Gtime(0.0),kh(0) {};
    Gunslinger(const string &s1, const string & s2, int n);
    Gunslinger(const string & s1, const string & s2,  double d,  int i) : Person(s1, s2), Gtime(d), kh(i) {};
    Gunslinger(const Person & p, double d,  int i) : Person(p), Gtime(d),kh(i) {};
    void Show() const;
    double  Draw() ;
};

template <class T1, class T2>
class Card
{
private:
    T1 hs;
    T2 val;
public:
    T1 & first() {return hs;};
    T2 & second() {return val;};
    T1 first() const {return hs;};
    T2 second() const {return val;};
    Card(const T1 & t1, const T2 & t2 ) : hs(t1), val(t2) {}
    Card() {}
};

class Pokerplayer : virtual public Person
{
private:
    Card<string , int> card;
public:
    Pokerplayer() : Person(), card("none",0) {};
    Pokerplayer(const string & s1, const string & s2) ;
    Pokerplayer(const string & s1, const string & s2, const string & s3,  int i) : Person(s1, s2), card(s3, i) {};
    Pokerplayer(const Person & p, const string s1,  int i) : Person(p), card(s1, i) {};
    void Show() const;
    Card<string, int> & Draw() ;

};

class BadDue :  public Gunslinger,  public Pokerplayer
{
public:
    BadDue() {};
    BadDue(const Person & p,  double d,  int i , const string & s,  int n) : Person(p), Gunslinger(p,d,i),Pokerplayer(p,s, n){};
    BadDue(const string & s1, const string & s2,  double d,  int i ) : Person(s1, s2), Gunslinger(s1, s2, d, i),Pokerplayer(s1, s2, "none",0) {};
    BadDue(const string & s1, const string & s2,  double d,  int i , const string & s3,  int i2) :Person(s1, s2), Gunslinger(s1, s2, d, i),Pokerplayer(s1, s2, s3,i2) {};
    BadDue(const Person & p,  double d,  int i) ;
    BadDue(const Person & p, const string & s,  int i);
    BadDue(const string & s1, const string & s2);
    double  GDraw() ;
    Card<string, int>  CDraw() ;
    void Show() const;
};


#endif //CHAPTER14_PERSON_H
