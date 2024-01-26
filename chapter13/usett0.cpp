//
// Created by 77469 on 2024/1/25.
//
#include "tabtenn0.h"
#include <iostream>

int main(void)
{
    using std::cout ;
    TableTennisPlayer player1("Chuck", "Blazzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();

    if (player1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";

    player2.Name();
    if (player2.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";

    return 0;
}