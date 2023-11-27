//
// Created by 77469 on 2023/11/25.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "enter a word: ";
    string word;
    cin >> word;

    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << "\nDONE\n";
    return 0;
}