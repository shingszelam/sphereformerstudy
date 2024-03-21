//
// Created by 77469 on 2024/3/6.
//

#include "workermi.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Worker::~Worker() {}

//保护方法
void Worker::Data() const
{
    cout << "Name: " << fullname << endl;
    cout << "Employee ID: " << id << endl;
}

void Worker::Get()
{
    getline(cin,fullname);
    cout << "Enter worker's ID: " ;
    cin >> id;
    while (cin.get() != '\n')
        continue;
}

//Waiter 方法
void Waiter::Set()
{
    cout << "Enter waiter's name: ";
    Worker::Get();
    Get();
}

void Waiter::Show() const
{
    cout << "Category:  waiter \n";
    Worker::Data();
    Data();
}

//waiter中的保护方法
void Waiter::Data() const
{
    cout << "Panache rating: " << panache << endl;
}

void Waiter::Get()
{
    cout << "Enter waiter's panache rating: " ;
    cin >> panache;
    while (cin.get() != '\n')
        continue;
}

//singer方法
char * Singer::pv[Singer::Vtypes] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
    cout << "Enter singer's name: ";
    Worker::Get();
    Get();
}

void Singer::Show() const
{
    cout << "Category: singer\n";
    Worker::Data();
    Data();
}

//singer的保护方法
void Singer::Data() const
{
    cout << "Vocal range: " << pv[voice] << endl;
}

void Singer::Get()
{
    cout << "Enter number for singer's vocal range: \n";
    int i;
    for (i = 0;  i < Vtypes; i++)
    {
        cout << i << ": " << pv[i] << " ";
        if (i % 4 == 3)
            cout << endl;
    }
    if (i % 4 != 0)
        cout << endl;
    cin >> voice;
    while (cin.get() != '\n')
        continue;
}

//singerwaiter方法
void Singerwaiter::Data() const
{
    Singer::Data();
    Waiter::Data();
}

void Singerwaiter::Get()
{
    Waiter::Get();
    Singer::Get();
}

void Singerwaiter::Set()
{
    cout << "Enter singing waiter's name: ";
    Worker::Get();
    Get();
}

void Singerwaiter::Show() const
{
    cout << "Category: singing waiter\n";
    Worker::Data();
    Data();
}
