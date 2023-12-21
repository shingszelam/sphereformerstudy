//
// Created by 77469 on 2023/12/17.
//
#include <iostream>
#include <new>
#include <cstring>

using namespace std;


const int BUF = 512;
const int N = 20;


struct chaff
{
    char dross[N];
    int slag;
};

chaff buffer[5];

int main()
{

    chaff *pc;
    pc = new (buffer) chaff [5];
    char data[20];
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "请输入dross: " ;
        cin.get(data,20);
        if (data[0] != ' ')
        {
            strcpy(pc[i].dross, data);
            cout << "请输入slag: " ;
            cin >> pc[i].slag;
            count ++;
            cin.get();
        }
        else break;
    }
    cout << "输入完毕" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << pc[i].dross << '\t' << pc[i].slag << endl;
    }

    delete [] pc;
    return 0;

}