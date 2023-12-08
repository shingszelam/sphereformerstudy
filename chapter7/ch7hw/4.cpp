//
// Created by 77469 on 2023/12/6.
//
#include <iostream>
using namespace std;
struct price
{
    int first ;
    int second[5];
};
const double pt =  (5.0/47.0) ;
double pre(const price );

int main()
{
    price zhongjiang;
    cout << "请设置中奖号： " <<endl;
    cout << "第一个区间1~47选择五个数： "<< endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "#" << (i + 1) << ": " ;
        cin >> zhongjiang.second[i];
    }
    cout << "第二个区间1~27选择一个数字： " << endl;
    cin >> zhongjiang.first;
    cout << "中将概率为： " << pre(zhongjiang)<<endl;
    return 0;
}

double pre(const price zj)
{
    int count=0;
    for (int i = 0; i < 5 ; i++)
    {
        if (zj.second[i] >0 && zj.second[i] < 48 && zj.first > 0 && zj.first < 28)
            if (zj.second[i] < 28)
                count++;
            else count = 0;
        else cout << "设置出错，退出程序";
    }

    float predict = pt *  1/ (27.0-double (count)) ;
    return predict;
}
