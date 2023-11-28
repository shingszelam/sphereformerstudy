//
// Created by 77469 on 2023/11/28.
//
#include <iostream>

using namespace std;

enum {red, orange, yellow, green, blue, violet, indigo};

int main()
{
    cout << "输入颜色代码（0-6）: " ;
    int code;
    cin >> code;
    while (code >= red && code <= indigo)
    {
        switch (code)
        {
            case red : cout << "her lips were red.\n"; break;
            case orange : cout << "her hair was orange.\n";
                break;
            case yellow: cout << "her shoes were yellow.\n";
                break;
            case green: cout << "her nails were green.\n";
                break;
            case blue: cout << "her sweatsuit was blue.\n";
                break;
            case violet: cout << "her eyes were violet.\n";
                break;
            case indigo: cout << "her mood was indigo.\n";
                break;
        }
        cout << "enter the color code (0-6): ";
        cin >> code;
    }
    cout << "bye\n";
    return 0;
}
