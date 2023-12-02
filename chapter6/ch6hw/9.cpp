//
// Created by 77469 on 2023/12/1.
//
#include <iostream>
#include <fstream>

#include <string>

#include <cstdlib>

#include <cctype>


using namespace std;

struct information
{
    string name;
    double money;
};

int main()
{
    int line=0, num, i, j;
    string buffer[10];
    ifstream inFile;
    char filename[30];

    cout << "输入你的文件名称： ";
    cin >> filename;

    inFile.open(filename);

    while (!inFile.eof())
    {
        getline(inFile, buffer[line], '\n');
        line++;
    }  //读取每一行存到缓存中

    inFile.close();

    num = atoi(buffer[0].c_str());
    information donors[num];
    for(i = 0 ; i< num; i++)
    {
        donors[i].name =  buffer[2*i+1];
        donors[i].money = atoi(buffer[2*i+2].c_str());
        cout << donors[i].name << " donation " << donors[i].money << endl;
    }

    return 0;


}