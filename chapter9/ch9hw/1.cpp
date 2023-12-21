//
// Created by 77469 on 2023/12/17.
//
#include <iostream>
#include "golf.h"
#include <cstring>
#include <string>

int main()
{
    using namespace std;
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    golf andy[5];
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        int hc;
        cout << "请输入用户姓名： ";
        cin.get(andy[i].fullname,40);
        if (setgolf(andy[i]) )
        {
            cin >> hc;
            handicap(andy[i], hc);
            count++;
            cin.get();
        } else break;
    }
    cout << "输入完毕" << endl ;
    showgolf(ann);
    for (int i = 0; i < count; i++)
    {

        showgolf(andy[i]);
    }
}