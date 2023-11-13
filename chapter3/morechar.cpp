//
// Created by 77469 on 2023/11/11.
//

#include <iostream>

using namespace std;


int main()
{
    char ch = 'M' ; //给ch传入一个ASCII码
    int i = ch ;  //保存相同的码作为一个int
    cout << "the ascii code for" << ch << " is " << i << endl;

    cout << "Add one to the character code: " << endl;
    ch = ch + 1;
    i = ch;
    cout << " the ascii code for " << ch << "is" << endl;

    //使用cout.put（）成员函数来展示一个char
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    //使用cout.put来展示一个字符常量
    cout.put('!');

    cout << endl << "Done" << endl;

    char alarm = '\a';
    cout << alarm << "don't that again!\a\n" ;
    cout << "ben \"buggies\" hacker\nwas here!\n";

    return 0;

}