//
// Created by 77469 on 2023/11/25.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "enter a word: " ;
    string word;
    cin >> word;

    for (int i = word.size() - 1; i>=0; i--)
        cout << word[i];
    cout << "\nBye.\n";

    return 0;
}