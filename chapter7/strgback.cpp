//
// Created by 77469 on 2023/12/2.
//
#include <iostream>

using namespace std;

char * buildstr(char c, int n);

int main()
{
    int items;
    char ch;
    cout << "enter a character: ";
    cin >> ch;
    cout << "enter an integer： ";
    cin >> items;
    char *ps = buildstr(ch, items);
    cout << ps << endl;
    delete [] ps; //释放该字符占用的内存，并且指向为下一个字符串分配的内存块。
    ps = buildstr('+', 20);
    cout << ps  << "-done-" << ps << endl;
    delete [] ps;
    return 0;
}

char * buildstr(char c, int n)
{
    char * pstr = new char [n+1];  //要生成n个字符的字符串 要存储n+1个字符空间 最后一个字符空间存储空值字符
    pstr[n] = '\0';
    while (n-- >0)//在到空值字符之前使用c字符来填充
        pstr[n] = c;
    return pstr;
}//pstr作用域在该函数内 但是由于返回了pstr给ps，故还是可以通过ps来对该地址进行访问