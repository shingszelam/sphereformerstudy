//
// Created by 77469 on 2024/2/29.
//
#include "attcabc3.h"
#include <iostream>
#include <string>
const int CLIENTS = 3;
int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    using std::string;

    ATTCabc * a_clients[CLIENTS];
    string templabel ;
    int temprating;
    string tempstyle;
    string tempcolor;
    int selection;

    for (int i = 0; i < CLIENTS ; i++)
    {

        cout << "Enter Clients label: ";
        getline(cin,templabel);
        cout << "Enter Clients rating: ";
        cin >> temprating;


        cout << "Enter 1 for BaseDMA or "
                << "2 for LacksDMA Account: " << "3 for HasDMA: ";
        while (cin >> selection && (selection <1 || selection >3 ))
            cout << "Enter 1,2,3";
        if (selection ==1 )
            a_clients[i] = new baseDMA(templabel.c_str(), temprating);
        else if (selection == 2)
        {
            cout << "Enter Clients color: ";
            cin.ignore();
            getline(cin,tempcolor);
            a_clients [i] = new lacksDMA(tempcolor.c_str(), templabel.c_str(), temprating);
        }
        else
        {
            cout << "Enter Clinets style: ";
            cin.ignore();
            getline(cin,tempstyle);
            a_clients [i] = new hasDMA(tempstyle.c_str(), templabel.c_str(), temprating);
        }

        while (cin.get() != '\n')
            continue;
    }
    cout << endl;
    for (int i = 0 ; i < CLIENTS; i++)
    {
        a_clients[i]->View();
        cout << endl;
    }

    for (int i = 0; i < CLIENTS ; i ++)
    {
        delete a_clients[i];
    }
    cout << "Done.\n";
    return 0;
}

