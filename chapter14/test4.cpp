//
// Created by 77469 on 2024/3/21.
//
#include <iostream>
#include "person.h"
#include <cstring>

int SIZE = 3;
int main()
{
    using namespace std;
    Person * local[SIZE];
    int ct;
    for (ct =0 ; ct < SIZE ; ct++)
    {
        char choice;
        cout << "Enter the person categor: \n"
        << "G: 枪手 , P: 卡牌手, T: 枪手卡牌手, Q: 退出\n";
        cin >> choice;
        while (strchr("gptq",choice)==NULL)
        {
            cout << "Please enter a g, p , t, q";
            cin >> choice;
        }
        if (choice=='q')
            break;
        else if (choice == 'g')
        {
            cout << "请输入枪手姓: " ;
            string temp1 ;
            string temp2 ;
            cin >> temp1;
            cout << "请输入枪手名: ";
            cin >> temp2;
            cout << "枪上刻痕数为: ";
            int k;
            cin >> k;
            local[ct] = new Gunslinger(temp1, temp2, 3);
        } else if (choice == 'p')
        {
            cout << "请输入卡牌手姓: " ;
            string temp1 ;
            string temp2 ;
            cin >> temp1;
            cout << "请输入卡牌手名: ";
            cin >> temp2;
            local[ct] = new Pokerplayer(temp1, temp2);
        }else if (choice== 't')
        {
            cout << "请输入枪手卡牌手姓: " ;
            string temp1 ;
            string temp2 ;
            cin >> temp1;
            cout << "请输入枪手卡牌手名: ";
            cin >> temp2;
            local[ct] = new BadDue(temp1, temp2);
        }
        cin.get();
    }
    for (ct = 0; ct < SIZE; ct ++)
    {
        local[ct]->Show();
    }
    return 0;
}