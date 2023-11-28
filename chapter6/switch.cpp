//
// Created by 77469 on 2023/11/28.
//
#include <iostream>

using namespace std;

void showmenu();
void report();
void comfort();

int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice !=5 )
    {
        switch (choice)
        {
            case 1 : cout << "\a\n";
            case 2 : report();
                break;
            case 3 : cout << "the boss was in all day.\n";
                break;
            case 4 : comfort();
                break;
            default: cout << "that's not a choice.\n";

        }
        showmenu();
        cin >> choice;
    }
    cout << "bye!\n";
    return 0;
}

void showmenu()
{
    cout << "pls enter 1, 2, 3, 4 or 5:\n"
            "1) alarm  2) report\n"
            "3) alibi  4) comfort\n"
            "5) quit\n";
}
void report()
{
    cout <<"it is been an excellent week for business.\n"
           "sales are up 120%.expenses are down 35%.\n";

}
void comfort()
{
    cout << "your employees think you are finest CEO\n"
            "in the industry. the board\n";
}