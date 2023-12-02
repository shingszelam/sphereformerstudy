//
// Created by 77469 on 2023/12/1.
//
#include <iostream>
#include <cctype>
#include <fstream>

using namespace std;

const int Size = 20;

int main()
{
    ifstream inFile;
    char filename[Size];

    char ch;

    cout << "enter name of your data file: ";
    cin.getline(filename, Size);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "打开文件失败"<< endl;
        cout << "程序终止！"<< endl;
        exit(EXIT_FAILURE);
    }

    int count = 0;
    inFile >> ch;
    while (inFile.good() && ch != '\0' && ch!= '\n')
    {
        ++count;
        inFile >> ch;
    }
    if (inFile.eof())
        cout << "文件读取完毕。\n";
    if (count==0)
        cout << "没有文件输入\n";
    else
        cout << "读取到了 " << count << " 个字符";

    return 0;


}