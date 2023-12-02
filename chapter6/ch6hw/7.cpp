//
// Created by 77469 on 2023/11/30.
//
//区分元音和辅音 只有aeiou为元音

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;

int vowels=0;
int consonants=0;
int others = 0;

int main()
{
    cout << "enter the words (q to quit) : " <<endl;

    string words;

    while (cin >> words && words !="q") //以单词为单位处理的方式 识别到空字符为一个字符串
    {
        if (words[0] == 'a' || words[0] == 'e' || words[0] == 'i' || words[0] == 'o' || words[0] == 'u'
        || words[0] == 'A' || words[0] == 'E' || words[0] == 'I' || words[0] == 'O' || words[0] == 'U')
        {
            vowels++;
        }
        else if (isalpha(words[0]))
        {
            consonants++;
        }
        else
        {
            others++;
        }
    }
    cout << "vowels: " << vowels << endl;
    cout << "consonants ： " << consonants<< endl;
    cout << "others " << others << endl;

    return 0;

}
