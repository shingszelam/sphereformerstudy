//
// Created by 77469 on 2024/2/28.
//

#ifndef CHAPTER13_DMA_H
#define CHAPTER13_DMA_H

#include <iostream>
class baseDMA
{
private:
    char * label;
    int rating;

public:
    baseDMA(const char * l = "null", int r = 0);
    baseDMA(const baseDMA & rs);
    virtual ~baseDMA();
    baseDMA & operator=(const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

//没有使用动态内存分配的派生类
class lacksDMA :public baseDMA
{
private:
    enum {COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null", int r=0);
    lacksDMA(const char * c, const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
};

//使用了动态内存分配的派生类
class hasDMA :public baseDMA
{
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null", int r = 0);
    hasDMA(const char * s, const baseDMA & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    friend std::ostream &operator<<(std::ostream & os, const hasDMA & rs);
};
#endif //CHAPTER13_DMA_H
