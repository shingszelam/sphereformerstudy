//
// Created by 77469 on 2023/12/20.
//

#ifndef CH10HW_7_H
#define CH10HW_7_H
class Plorg
{
private:
    char name[19];
    int CI;
public:
    Plorg(char * n = "Plorg", int C = 50);
    void reset(int C);
    void show() const;
};
#endif //CH10HW_7_H
