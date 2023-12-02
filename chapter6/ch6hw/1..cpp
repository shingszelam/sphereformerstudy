//
// Created by 77469 on 2023/11/30.
//
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;
    cin.get(ch);

    while (ch != '@')
    {
        cin.get(ch);
        if (ch >= 'a' && ch <= 'z')
            ch = toupper(ch);
        else if (ch >= 'A' && ch <= 'Z')
            ch = tolower(ch);
        cout << ch;
    }
    return 0;
}
// 这种做法会出现的问题就是