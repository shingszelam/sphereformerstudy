//
// Created by 77469 on 2023/12/19.
//

#ifndef CH10HW_6_H
#define CH10HW_6_H
class Move
{
private:
    double x;
    double y;
public:
    Move();
    Move(double a, double b);
    void showmove() const;
    Move add(const Move & M) ;
    void reset(double a = 0, double b = 0);

};
#endif //CH10HW_6_H
