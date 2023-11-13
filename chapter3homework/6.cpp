//
// Created by 77469 on 2023/11/13.
//

#include <iostream>
using namespace std;

int main()
{
    double km;
    double litre;

    cout << "输入驱车里程和耗油量：";
    cin >> km ;
    cin >> litre;

    cout << "每百公里的油耗量的欧洲表示: " << litre / km * 100 << "升/百公里" << endl;
    cout << "-----------美国表示方法----------------" << endl;
    double mile;
    double galon;
    double const m_per_k = 100 / 62.14;
    double const g_per_l =  3.785;
    mile = km * m_per_k;
    galon = litre * g_per_l;
    cout << "每百公里的油耗量美国表示: " << mile / galon * 100 << "mpg" << endl;

    //别人的实现：
    double ouzhou = litre / km * 100;
    double const hunkm_to_mi = 62.14;
    double const gal_to_l = 3.875;

    double mpg;
    mpg = 1/(ouzhou / gal_to_l / hunkm_to_mi);
    cout << mpg;
    return 0;

}