//
// Created by 77469 on 2023/12/7.
//
#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
//getinfo() has two argumnets: a pointer to the first element of
//an array of student structures and an int representing the
//number of elemnets of the array. The function solicits and
//stores data about students. It terminates input upon filling
//the array or upon encountering a blank line for the student
//name. The function returns the actual number of array elemnets
//filled.
int getinfo(student pa[], int n);
//display1() takes a student structure as an argument
//and displays its contents
void display1(student st);
//display2() takes the address of student struture as an
//argument and displays the stucture's contents
void display2(const student* ps);
//display3() takes the address of the first elemnet of an array
//of student structures and the number of array elemnets as
//arguments and displays the contents of the structures
void display3(const student pa[], int n);
int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; ++i)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int successNumber=0;
    for (int i = 0; i < n; i++)
    {
        cout << "请输入第" << i + 1 << "个学生的全名：";
        cin.getline(pa[i].fullname,20);
        cout << "请输入第" << i + 1 << "个学生的爱好：";
        cin.getline(pa[i].hobby, 20);
        cout << "请输入第" << i + 1 << "个学生的面向对象级别：";
        (cin >> pa[i].ooplevel).get();
        ++successNumber;
    }
    return successNumber;
}
void display1(student st)
{
    cout << "学生的全名：" << st.fullname<<endl;
    cout << "学生的爱好：" << st.hobby << endl;
    cout << "学生的面向对象级别：" << st.ooplevel << endl;
}
void display2(const student* ps)
{
    cout << "学生的全名：" << ps->fullname << endl;
    cout << "学生的爱好：" << ps->hobby << endl;
    cout << "学生的面向对象级别：" << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "学生的全名：" << pa[i].fullname << endl;
        cout << "学生的爱好：" << pa[i].hobby << endl;
        cout << "学生的面向对象级别：" << pa[i].ooplevel << endl;
    }
}
