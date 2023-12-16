//
// Created by 77469 on 2023/12/13.
//
#include <iostream>

using namespace std;

#include <cstring>

struct stringy
{
    char * str;
    int ct;//string的长度
};

void set(stringy &, const char *);
void show(const stringy &, int n=1);
void show(const char * , int n =1);

int main()
{
    stringy beany={
            "this is initial. ",
            0
    };
    char testing[] = "reality isn't what it used to be.";
    set(beany,testing);
    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Done!");

    return 0;

}

void set(stringy & b1, const char * t1)
{
    b1.str = new char[strlen(t1)];//构造一个足够长能存放字符串信息的空间
    //如果构建一个新的指针再将其指定到b1.str中，会造成内存泄露。
    strcpy(b1.str, t1);
    b1.ct = strlen(b1.str);

}
void show(const stringy & b1, int n)
{
    cout << "展示beany"<<endl;
    if (n==1)
        cout << b1.str << endl;
    else
        for(int i=0; i < n && n!=1; i++)
            cout << b1.str <<endl;
}


void show(const char * str1, int n )
{
    cout << "展示testing"<<endl;
    if (n==1)
        cout << str1 <<endl;
    else
        for(int i=0; i < n-1 && n!=1; i++)
            cout << str1 <<endl;
}

