//
// Created by 77469 on 2023/12/19.
//
#include <iostream>
#include "3.h"
#include <cstring>

int main()
{
    using namespace std;
    Golf golftemp;
    golftemp.show();

    Golf golf2 = {"Ann Birdfree", 24};
    golf2.show();
    Golf golf3[5];
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "请输入用户姓名： ";
        char ntemp[40];
        int hctemp;
        cin.get(ntemp,40);
        if (strlen(ntemp) != 0 && ntemp[0] != ' ')
        {
            count ++;
            cout << "请输入用户等级： ";
            cin >> hctemp;
            cin.get();
            golftemp = {ntemp, hctemp};
            golf3[i].setgolf(golftemp);
        } else break;
    }
    cout << "输入完毕！" << endl;

    cout << endl;

    for (int i = 0; i < count; i++)
    {
        golf3[i].show();
    }
    return 0;
}