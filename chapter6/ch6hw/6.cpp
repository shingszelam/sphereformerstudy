//
// Created by 77469 on 2023/11/30.
//
#include <iostream>
#include <string>
#include <string>
using namespace std;

struct information
{
        string name;
        double money;
};

int main()
{
    cout << "请输入捐款的总人数: ";
    int num ;
    cin >> num;
    cin.get();

    information * pi = new information[num];

    string infname;
    double infmoney;

    for (int i=0; i < num; i++)
    {
        cout << "捐款人" << i + 1 << " 姓名： ";
        getline(cin,infname);
        pi[i].name = infname;
        cout << "捐款金额： " ;
        cin >> infmoney;
        pi[i].money = infmoney;
        cin.get();
    }

    cout << "-----重要捐款人信息------" << endl;
    for (int i =0; i < num; i++)
    {
        if (pi[i].money >= 10000)
            cout << pi[i].name << '\t' << pi[i].money << endl;
        else cout << "none" << endl;
    }

    cout << "-----其他捐款人信息------" << endl;
    for (int i =0; i < num; i++)
    {
        if (pi[i].money < 10000)
            cout << pi[i].name << '\t' << pi[i].money << endl;
        else cout << "none" << endl;

    }

    return 0;


}