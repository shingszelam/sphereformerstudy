//
// Created by 77469 on 2024/3/12.
//

#ifndef CH14HMWK_WORKE_H
#define CH14HMWK_WORKE_H

#endif //CH14HMWK_WORKE_H
#include <string>
class Worker
{
private:
    std::string fullname;
    long id;
public:
     void Show() const;
     void Set() ;
public:
    Worker() : fullname("no one"),id(0L) {}
    Worker(const std::string & s , long n) : fullname(s), id(n) {}
     ~Worker();

};