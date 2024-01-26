//
// Created by 77469 on 2024/1/21.
//

#ifndef CHAPTER12_1_H
#define CHAPTER12_1_H
class Cow
{
private:
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow & c);
    ~Cow();
    Cow & operator=(const Cow & c);
    void ShowCow() const;
};
#endif //CHAPTER12_1_H
