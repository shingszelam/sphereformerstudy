//
// Created by 77469 on 2023/12/20.
//
#include <iostream>
#include "8.h"
#include <cctype>
using namespace std;

int main()
{
    cout << "Please enter C list,P process the list, S show the items, Q to quit: ";
    char ch;
    List list1;
    int data;
    while (cin>>ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << "error";
            continue;
        }
        switch (ch)
        {
            case 'C':
            case 'c':
                if (list1.ismax())
                    cout << "The list already full. " <<endl;
                else
                {
                    cout << "Enter the data: ";
                    cin >>data;
                    list1.add(data);
                }
                break;
            case 'P':
            case 'p':
                if (list1.ismin())
                    cout << "The list already empty." << endl;
                else
                {
                    list1.visit(p);//p是对List类进行处理的函数
                    //通过visit中间的函数指针指向它
                    cout << "Every data has plused 100." <<endl;
                }
                break;
            case 'S':
            case 's':
                list1.show();
                break;
        }
        cout << "Please enter C list, P process the list, S show the items, Q quit:" << endl;
    }
    list1.show();
    system("pause");
    return 0;
}