//
// Created by 77469 on 2024/3/5.
//

#ifndef CHAPTER14_WORKER0_H
#define CHAPTER14_WORKER0_H
#include <string>

class Worker
{
private:
    std::string fullname;
    long id;
public:
    Worker() : fullname("no one"), id(0L) {}
    Worker(const std::string & s, long n) : fullname(s), id(n) {}
    virtual ~Worker() = 0;//纯虚函数
    virtual void Set();
    virtual void Show() const;
};

class Waiter : public Worker
{
private:
    int panache;
public:
    Waiter() : Worker(), panache(0) {}
    Waiter(const std::string & s , long n , int p = 0) : Worker(s, n) , panache(p) {}
    Waiter(const Worker & wk, int p = 0) : Worker(wk), panache(p) {}
    void Set();
    void Show() const;
};

class Singer : public Worker
{
protected:
    enum {other, alto, contralto, soprano, bass, baritone, ternor};
    enum {Vtypes = 7};
private:
    static char * pv[Vtypes]; //语音类型的字符串等效项
    int voice;
public:
    Singer() : Worker(), voice(other) {}
    Singer(const std::string & s , long n, int v = other) : Worker(s, n) ,voice(v) {}
    Singer(const Worker & wk, int v = other) : Worker(wk), voice(v) {};
    void Set();
    void Show() const;
};

#endif //CHAPTER14_WORKER0_H
