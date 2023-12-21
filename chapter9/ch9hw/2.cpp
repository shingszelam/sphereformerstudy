//
// Created by 77469 on 2023/12/17.
//
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
void strcount(const string );

int main()
{
    string input;


    cout << "enter a line\n";
    getline(cin, input);
    while (cin)
    {

        while (input != " " )
        {
            strcount(input);
            getline(cin, input);
        }
        break;
    }
    cout << "bye\n";
    return 0;

}
void strcount(const string str)
{
    using namespace std;
    static int total = 0;
    int count = 0;
    count = str.size();
    total += count;
    cout <<"\"" << str << "\" contains ";
    cout << count <<  " characters\n";
    cout << total <<  " characters total\n";

}