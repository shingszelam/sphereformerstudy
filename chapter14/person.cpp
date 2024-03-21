//
// Created by 77469 on 2024/3/21.
//

#include "person.h"
#include <iostream>
#include <ctime>
using namespace std;

Person::Person(const Person &p)
{
    if (p.fname.size() > 0 )
        fname=p.fname;
    if (p.lname.size() > 0)
        lname = p.lname;
}
Person::~Person()
{}
//枪手
Gunslinger::Gunslinger(const std::string &s1, const std::string &s2, int n) : Person(s1, s2)
{
    Gtime = Draw();
    kh = n;
}
void Gunslinger::Show() const
{
    cout << "枪手姓名为: " ;
    Person::Show();
    cout << "拔枪时间为: " << Gtime << "s, " << "枪上刻痕为: " << kh << endl;
}

double Gunslinger::Draw()
{
    std::srand(std::time(0));
    Gtime = 2.0 * rand() /RAND_MAX;
    return Gtime;

}

//卡牌手

Pokerplayer::Pokerplayer(const std::string &s1, const std::string &s2) : Person(s1, s2)
{
    card = Draw();
}

void Pokerplayer::Show() const
{
    cout << "卡牌手姓名为: " ;
    Person::Show();
    cout << "卡牌花色为: " << card.first() << ", " << "卡牌面值为： " << card.second() << endl;
}

Card<string, int> &Pokerplayer::Draw()
{
    enum Suit {heitao, hongtao, heimeihua, hongmeihua, heifangkuai, hongfangkuai};
    std::srand(std::time(0));
    Suit rand_suit = static_cast<Suit>(rand() % 6);
    switch (rand_suit)
    {
        case heitao: card.first() = "黑桃";
            break;
        case hongtao: card.first() = "红桃";
            break;
        case heimeihua: card.first() = "黑梅花";
            break;
        case hongmeihua: card.first() = "红梅花";
            break;
        case heifangkuai: card.first()  = "黑方块";
            break;
        case hongfangkuai: card.first() = "红方块";
            break;
    }
    card.second() = rand() % 52 + 1;
    return card;

}

//baddue
BadDue::BadDue(const Person &p, double d, int i) : Person(p), Gunslinger(p,d, i)
{

}

BadDue::BadDue(const Person &p, const std::string &s, int i) :Person(p), Pokerplayer(p,s, i)
{

}

BadDue::BadDue(const std::string &s1, const std::string &s2) : Person(s1, s2)
{
    std::srand(std::time(0));
    int n = rand() % 10 +1;
    double t1 = GDraw();
    Gunslinger(s1,s2, t1, n);
    Card<string, int> t2;
    t2 = CDraw();
    Pokerplayer(s1,s2,t2.first(),t2.second());

}

Card<string, int> BadDue::CDraw()
{
    Card<string, int> temp = Pokerplayer::Draw();
    return temp;
}

double BadDue::GDraw()
{
    double temp = Gunslinger::Draw();
    return temp;

}

void BadDue::Show() const
{
    Gunslinger::Show();
    Pokerplayer::Show();

}

