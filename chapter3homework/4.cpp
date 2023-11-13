//
// Created by 77469 on 2023/11/13.
//

#include <iostream>

using namespace std;

int main()
{
    long long s ;
    int const m_per_s = 60;
    int const h_per_s = m_per_s * 60;
    int const d_per_s = h_per_s * 24;

    cout << "enter the number of seconds = " ;
    cin >> s;
    int day = s / d_per_s;
    int s1 = s % d_per_s; //余下多少秒
    int hours = s1 / h_per_s; //余下的秒转换成时
    int s2 = s1 % h_per_s;  //转换成时后还剩多少秒
    int minuts = s2 / m_per_s; //余下秒转换成分
    int s3 = s2 % m_per_s; //最后还剩多少秒

    cout << s << " seconds = " << day << "days, "
    << minuts << "minutes, "
    << s3 << "seconds. " << endl;

    return 0;

}