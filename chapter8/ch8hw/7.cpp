//
// Created by 77469 on 2023/12/13.
//
#include <iostream>

using namespace std;

template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
T sumarray(T arr[], int n);

//template <typename T>
//void ShowArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};


double sumarray(debts arr[], int n);

int main()
{
    int things[6] = {13, 31, 103,301,310,130};
    struct debts mr_E[3] =
            {
                    {"ima wolfe", 2400.0},
                    {"ura foxe", 1300.0},
                    {"iby stout", 1800.0}
            };
    double  * pd[3];

    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    cout << "listing mr.e's counts of things:\n";
    ShowArray(things, 6);

    cout << "listing Mr.E 's debts:\n";
    ShowArray(pd,3);

    cout << "things总和为 " << sumarray(things,6) << endl;
    cout << "debets总和为 " << sumarray(mr_E,3) << endl;
    return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    cout <<"template A \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

template <typename T>
T sumarray(T arr[], int n)
{
    T a =0;
    for (int i = 0; i < n; i++ )
    {
        a+=arr[i];
    }
    return a;
}


double sumarray(debts arr[], int n)
{
    double a = 0;
    for (int i = 0; i < n; i++) {
        a += arr[i].amount;
    }
    return a;
}

