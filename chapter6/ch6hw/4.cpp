//
// Created by 77469 on 2023/11/30.
//
#include <iostream>

using namespace std;

void displayway();
void displayname();
void displaytitle();
void displaybopname();
void displaypreference();

const int strsize = 100;
char choice ;

struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

const  bop people[5] =
        {
                {"王晓亮", "高级工程师", "小王", 2},
                {"成思霖", "算法工程师", "成总", 1},
                {"徐湘", "管理层", "湘湘", 0},
                {"官珂", "开发者", "老官", 0},
                {"谁都行", "前端", "某某", 1}
        };



int main()
{

    displayway();
    cout << "enter your choice: ";
    cin >> choice;

    while(choice >= 'a' && choice <= 'z' && choice != 'q' )
    {
        switch (choice)
        {
            case 'a': displayname();
                break;
            case 'b': displaytitle();
                break;
            case 'c': displaybopname();
                break;
            case 'd': displaypreference();
                break;
            //case 'q': cout << "bye\n";
                //break;
            default: cout << "pls enter a  a,b,c,d or q: " ;
        }
        cin >> choice;
    }
    cout << "bye\n";



    return 0;

}

void displayway()
{
    cout << "benevolent order of programmers report\n"
            "a. display by name  b. display by title\n"
            "c. display by bopname  d. display by preference\n"
            "q. quit"<<endl;
}

void displayname()
{
    for (int i=0; i< 5; i++)
        cout << people[i].fullname << endl;
    cout << "next choice: ";
    //cin >> choice;
}

void displaytitle()
{
    for (int i = 0; i< 5; i++)
        cout << people[i].title << endl;
    cout << "next choice: ";
    //cin >> choice;
}

void displaybopname()
{
    for (int i = 0; i< 5; i++)
        cout << people[i].bopname << endl;
    cout << "next choice: ";
    //cin >> choice;
}

void displaypreference()
{
    for (int i = 0; i <5; i++)
    {
        if (people[i].preference==0)
            cout << people[i].fullname << endl;
        else if (people[i].preference==1)
            cout << people[i].title << endl;
        else
            cout << people[i].bopname << endl;
    }
    cout << "next choice: ";
    //cin >> choice;
}