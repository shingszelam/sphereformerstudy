//
// Created by 77469 on 2023/11/27.
//
#include <iostream>
#include  <string>

using namespace std;

const int months = 12;
const int years = 3;

int main()
{
    const char * month[months]=
            {
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December"
            };
    /*******第五题
    int salestate[months];
    int ss;
    int count = 0;
    cout << "2023年的销售状况如下所示： " << endl;
    for (int i = 0; i < months ; ++i)
    {
        cout << month[i] << ": \t";
        cin >> ss;
        salestate[i] = ss;
        count += ss;
    }
    cout << "2023年销售总量为" << count << endl;
    ******/

    //第六题
    int salesate[years][months];
    int ss;
    int count[years] = {0,0,0};
    int count3 = 0;
    cout << "近三年销售状况如下所示 :  " << endl;
    for (int i = 0; i < years ; ++i)
    {
        cout << "第" << i << "年每月销售情况" << endl;
        for (int j = 0; j < months ; ++j)
        {
            cout << month[j] <<  ": \t";
            cin >> ss;
            salesate[i][j] = ss;
            count[i] += ss;
        }
        cout << "第" << i << "销售总量为" << count[i] << endl;

    }
    count3 = count[0] + count[1] + count[2];
    cout << "三年销售总量为" << count3;

    return 0;


}