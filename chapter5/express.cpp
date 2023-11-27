//
// Created by 77469 on 2023/11/25.
//
#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "the expression x = 100 has the value ";
    cout << (x = 100 ) << endl;
    cout << "now expression x < 3 has the value " ;
    cout << (x < 3) << endl;
    cout << "now expression x > 3 has the value ";
    cout << (x >3 ) << endl;
    cout.setf(ios_base::boolalpha); //cout在显示布尔值之前给他们转换成正型 使用这个标志可以直接输出false 和true
    cout << "the expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << " expression x > 3 has the value ";
    cout << (x >3 ) << endl;
    return 0;
}