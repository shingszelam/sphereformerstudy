//
// Created by 77469 on 2024/3/6.
//
#include <iostream>
#include <cstring>
#include "workermi.h"

const int SIZE = 5;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Worker * lolas[SIZE];

    int ct;
    for (ct = 0 ; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:" << endl
        << "w: waiter s: singer t: singing waiter q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) ==NULL) //通过判断输入的choice里面是否含有wstq任何一个
        {
            cout << "Please enter a w, s, t, q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice)
        {
            case 'w': lolas[ct] = new Waiter;
                break;
            case 's': lolas[ct] = new Singer;
                break;
            case 't': lolas[ct] = new Singerwaiter;
                break;
        }
        cin.get();
        lolas[ct]->Set();
    }
    cout <<"\nHere is your staff:\n";
    int i ;
    for (i=0; i < ct;  i++)
    {
        cout << endl;
        lolas[i]->Show();
    }

    for (i=0; i < ct; i++)
        delete lolas[i];
    cout << "Bye.\n";
    return 0;
}