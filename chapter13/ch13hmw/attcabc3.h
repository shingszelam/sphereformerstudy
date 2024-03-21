//
// Created by 77469 on 2024/2/29.
//

#ifndef CH13HMW_ATTCABC3_H
#define CH13HMW_ATTCABC3_H
#include <iostream>

class ATTCabc
{
private:
    char * label;
    int rating;

public:
    ATTCabc(const char *l = "null", int r =0);
    ATTCabc(const ATTCabc &as);
    virtual ~ATTCabc();
    ATTCabc & operator=(const ATTCabc & as);
    virtual void View();
    //friend std::ostream & operator<<(const std::ostream & os , const ATTCabc & as);

};

class baseDMA : public ATTCabc
{
public:
    baseDMA(const char * l = "null", int r = 0) : ATTCabc(l,r){};
    baseDMA(const baseDMA &bs) : ATTCabc(bs) {};

};

class lacksDMA :public ATTCabc
{
private:
    enum {COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null", int r=0);
    lacksDMA(const char * c, const ATTCabc & as);
    void View();

};

class hasDMA :public ATTCabc
{
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null", int r = 0);
    hasDMA(const char * s, const ATTCabc & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    void View();
    //friend std::ostream &operator<<(std::ostream & os, const hasDMA & rs);
};

#endif //CH13HMW_ATTCABC3_H
