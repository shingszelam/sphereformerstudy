//
// Created by 77469 on 2023/11/23.
//
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps;

    cout << animal << " and " << bird << endl;

    cout << "enter a kind of animal: " ;
    cin >> animal;

    ps = animal;
    cout << ps << "!" << endl;
    cout << "before using strcpy(): " << endl;
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1] ;
    strcpy(ps, animal);
    cout << "after using strcpy()" << endl;
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    delete [] ps;

    return 0;
}