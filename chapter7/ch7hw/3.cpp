//
// Created by 77469 on 2023/12/5.
//
#include <iostream>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float length;
    float volume;
};

void show(box );
float vvv(const box * );

int main()
{
    box boxual =
            {
            "shingzselam",
            1.66,
            1.66,
            2,
            };
    show(boxual);
    box * pb;
    pb = &boxual;

    float v3 = vvv(pb);
    cout << "体积为： "<< v3;
    return 0;

}

void show(box bx)
{
    cout << "制造商为： " << bx.maker << endl;
    cout << "高度为： " << bx.height << endl;
    cout << "长度为： " << bx.length << endl;
    cout << "深度为： " << bx.volume << endl;

}

float vvv(const box * ps)
{
    float v3 = ps->volume * ps->length * ps->height;
    return v3;
}