//
// Created by 77469 on 2023/12/7.
//
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int SLEN = 50;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    cout << "enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i =0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int count=0;
    int i;
    for ( i = 0 ; i < n; i++)
    {
        cout << "请输入"<< i +1 << "学生姓名: " ;
        cin.getline(pa[i].fullname, SLEN);
        //cin.get();
        cout << "请输入"<< i +1 <<"学生爱好： " ;
        cin.getline(pa[i].hobby, SLEN);
        //cin.get();
        cout << "请输入"<< i +1 <<"学生面向对象级别： ";
        cin >> pa[i].ooplevel;
        cin.get();
        ++count;
    }
    return count;
}

void display1(student st)
{
    //
    cout << st.fullname << endl;
    cout << st.hobby << endl;
    cout << st.ooplevel << endl;
}

void display2(const student * ps)
{
    //
    cout << ps->fullname << endl;
    cout << ps->hobby << endl;
    cout << ps->ooplevel << endl;

}

void display3(const student pa[], int n)
{
    //
    for (int i = 0; i< n ; i++)
    {
        cout << pa[i].fullname << endl;
        cout << pa[i].hobby << endl;
        cout << pa[i].ooplevel << endl;
    }
}