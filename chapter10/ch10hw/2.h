//
// Created by 77469 on 2023/12/19.
//

#ifndef CH10HW_2_H
#define CH10HW_2_H
#include <string>
class Person
{
private:
    static const int LIMIT=25;
    std::string lname;
    char fname[LIMIT];
public:
    Person() ;
    Person(const std::string & ln, const char * fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};
#endif //CH10HW_2_H
