//
// Created by 77469 on 2023/11/27.
//
#include <iostream>
#include <cstring>
using namespace std;

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /****第八题
    char word[100];
    int count = 0;  // 初始计数为0
    cin >> word;   // 使用cin读取一个单词 确保第一个单词不是done

    while (strcmp(word, "done") != 0)  // 修正循环条件
    {
        ++count;
        cin >> word;  // 使用cin读取下一个单词
    }

    cout << "输入了 " << count << " 个单词" << endl;
     ***/
    string word;
    int count=0;

    cin >> word;

    while (word != "done") //此处可以直接比较
    {
        ++count;
        cin >> word;
    }
    cout << "输入了 " << count << " 个单词" << endl;
    return 0;


}
