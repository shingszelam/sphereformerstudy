//
// Created by 77469 on 2023/11/24.
//
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    cout << "what is your fist name ?" <<endl;
    char f_name[20];
    char l_name[20];
    cin.getline(f_name, 20);
    cout << "what is your last name ?\n";
    cin.getline(l_name, 20);
    cout << "what letter grade do you deserve?" <<endl;
    char grade[10];
    char grade2  = 'C';
    cin.getline(grade, 10);
    cout << "what is your age?" <<endl;
    int age;
    cin >> age;
    cout <<"name: " << l_name << "," << f_name<<endl;
    cout << "grade: " << grade2 << endl;
    cout << "age: " << age;

    return 0;
}