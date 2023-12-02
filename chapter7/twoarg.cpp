//
// Created by 77469 on 2023/12/1.
//
#include <iostream>
using namespace std;
void n_chars(char, int);

int main()
{
    int items;
    char ch;

    cout << "enter a character: ";
    cin >> ch;
    while (ch !='q')
    {
        cout << "enter a integer:";
        cin >> items;
        n_chars(ch, items);
        cout << "\nenter another character or press the "
                "q-key to quit: ";
        cin >> ch;
    }
    cout << "the value of time is " << items << ".\n";
    cout << "bye.\n";
    return 0;
}

void n_chars(char c, int n)
{
    while (n-- >0)
        cout << c;
}