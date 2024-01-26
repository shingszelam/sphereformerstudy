//
// Created by 77469 on 2024/1/2.
//

#ifndef CHAPTER11_MYTIME0_H
#define CHAPTER11_MYTIME0_H

class Time
        {
    private:
            int hours;
            int minutes;
            public:
            Time();
            Time(int h, int m = 0);
            void addMin(int m);
            void addHr(int h);
            void Reset(int h=0, int m = 0);
            Time Sum(const Time & t) const;
            void show() const;
        };
#endif //CHAPTER11_MYTIME0_H
