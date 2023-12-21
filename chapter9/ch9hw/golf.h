//
// Created by 77469 on 2023/12/17.
//

#ifndef CH9HW_GOLF_H
#define CH9HW_GOLF_H

const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

void setgolf(golf & g, const char * name, int hc);

int setgolf(golf & g);

void handicap(golf &g , int hc);

void showgolf(const golf & g);


#endif //CH9HW_GOLF_H
