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
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
    rect rplace;
    polar pplace;

    cout << "enter the x and y values: ";
    while (cin>>rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "next two numbers (q to quit): " ;
    }
    cout << "done.\n";
    return 0;
}

polar rect_to_polar(rect xypos)
{
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}

void show_polar(polar dapos)
{
    const double rad_to_deg = 57.29577951;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * rad_to_deg;
    cout << " degress\n";
}
