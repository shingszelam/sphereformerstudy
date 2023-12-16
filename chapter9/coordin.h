#ifndef COORDIN_H_ //避免多次包含同一个头文件 只有再没有定义这个头文件的情况下才执行中间的过程
#define COORDIN_H_

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif