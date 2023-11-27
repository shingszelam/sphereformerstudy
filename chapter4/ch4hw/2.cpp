//
// Created by 77469 on 2023/11/24.
//
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string name;
    string dessert;

    cout << "enter your name: \n";
    //cin >> name; //string的io 如果使用cin的话会只读取一个单词 并且下一行的输入识别到的是上一行的空字符 导致不会有输入机会 所以需要用函数getline(cin,str)
    getline(cin, name);
    cout << "enter your favorite dessert: \n";
    //cin >> dessert;
    getline(cin, dessert);
    cout << "i have some delicious dessert " << dessert;
    cout << " for you " << name << endl;

    return 0;
}