//
// Created by 77469 on 2023/12/2.
//
#include <iostream>
#include <cmath>

using namespace std;

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
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main()
{
    rect rplace;
    polar pplace;

    cout << "enter the x and y values: ";
    while (cin>>rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "next two numbers (q to quit): " ;
    }
    cout << "done.\n";
    return 0;
}

void rect_to_polar(const rect * pxy, polar * pda)
{

    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}

void show_polar(const polar * pda)
{
    const double rad_to_deg = 57.29577951;
    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * rad_to_deg;
    cout << " degress\n";
}
