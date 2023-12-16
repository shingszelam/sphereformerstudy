//
// Created by 77469 on 2023/12/13.
//
#include <iostream>
#include <cctype>
#include <string>
#include <cstring>
#include <climits>
using namespace std;

string a2A(string & );

int main()
{
    string str1;
    cout << "enter a string (q to quit ): "<< endl;
    //char inputchar;
    while (str1 != "q"){

        getline(cin,str1);
        str1 = a2A(str1);
        cout << str1 << endl;
        cout << "next string (q to quit ): "<< endl;
        //cin.get();
    }
    return 0;
}

string a2A(string & stq)
{

    for (int i = 0; i < stq.size(); i++)
    {
        if (stq[i] >= 'a' && stq[i] <= 'z' )
            stq[i] = char (toupper(stq[i]));
        else continue;
    }

    return stq;
}