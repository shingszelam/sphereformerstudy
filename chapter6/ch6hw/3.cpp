//
// Created by 77469 on 2023/11/30.
//
#include <iostream>

using namespace std;
void showmenu();


int main()
{
    char choice;
    cout << "pls enter one of the follwing choices: " << endl;
    showmenu();
    cin >> choice;
    while (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g')
    {
        cout << "pls enter  a c, p, t, or g: ";
        cin >> choice;}

    switch (choice)
    {
        case 'c': cout << "a maple is a carnivore" << endl;
        break;
        case 'p': cout << "a maple is a pianist" << endl;
        break;
        case 't': cout << "a maple is a tree" << endl;
        break;
        case 'g': cout << "a maple is a game" << endl;
        break;
    }

    return 0;

}

void showmenu()
{
    cout << "c) carnivore  p)pianist \n t) tree  g) game\n" ;
}