//
// Created by 77469 on 2023/11/26.
//
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;

    char word[5] ="?ate";
    for (char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "after loop end, word is " << word << endl;
    return 0;
}
