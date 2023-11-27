//
// Created by 77469 on 2023/11/24.
//
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct pizza
{
    char company[50];
    float zhijing;
    float weights;
};

int main()
{
    /***
    pizza a1;
    cout << "请输入公司的名字： " ;
    getline(cin, a1.company);
    cout << "请输入披萨的直径： ";
    cin >> a1.zhijing;
    cout << "请输入披萨的重量： ";
    cin >> a1.weights;
    cout << "披萨公司的名字为： " << a1.company<< endl;
    cout << "披萨直径为：" << a1.zhijing << endl;
    cout << "披萨重量为：" << a1.weights << endl; ***/

    //第八题
    pizza * pa = new pizza;
    cout << "请输入披萨的直径： ";
    cin >> (*pa).zhijing;
    cin.get(); //输入数字之后一个回车符号会造成下一个cin识别成空字符 导致读取结束 索引使用cin.get()消除空字符
    cout << "请输入公司的名字： " ;
    cin.get(pa->company, 50) ;
    cout << "请输入披萨的重量： ";
    cin >> pa->weights;

    cout << "披萨公司的名字为： " << pa->company << endl;
    cout << "披萨直径为：" << (*pa).zhijing << endl;
    cout << "披萨重量为：" << pa->weights << endl;

    return 0;

}