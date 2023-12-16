//
// Created by 77469 on 2023/12/13.
//
#include <iostream>
using namespace std;

struct candybar
{
    char * name;
    double weight;
    int kaluli;

};

void fill (candybar & , char * n1= "Millennium Munch", double w1 =2.85, int k1=350);
void show(const candybar &);

int main()
{
    candybar c1;
    fill(c1);
    show(c1);
    cout<<"请输入新的糖果名字： " << endl;
    char n2[20];
    cin.get(n2,20).get();
    char * cpn2 = n2;
    cout << "请输入重量： " << endl;
    double w2;
    cin >> w2;
    cout << "请输入卡路里： "<< endl;
    int k2;
    cin >> k2;
    fill(c1,cpn2,w2,k2);
    show(c1);
    return 0;
}

void fill (candybar & c, char * n1, double w1 , int k1)
{
    c.name = n1;
    c.weight = w1;
    c.kaluli = k1;

}

void show(const candybar & c)
{
    cout << c.name << '\t' << c.weight << '\t' << c.kaluli << endl;
}