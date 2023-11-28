//
// Created by 77469 on 2023/11/28.
//
#include <iostream>
using namespace std;

const int ArSize = 80;
int main()
{
    char line[ArSize];
    int spaces = 0;

    cout << "enter a line of text: \n";
    cin.get(line,ArSize);
    cout << "complete line:\n" << line << endl;
    cout << "line through first period:\n";
    for (int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i];
        if (line[i] == '.')
            break;
        if (line[i] !=' ')
            continue;
        spaces++;
    }
    cout << "\n"<< spaces <<  " spaces\n";
    cout << "Done.\n";
    return 0;
}