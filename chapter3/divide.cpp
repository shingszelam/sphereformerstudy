//
// Created by 77469 on 2023/11/12.
//

//除法的结果取决于操作数的类型 操作数如果都是整数  那么结果有小数的时候去掉小数保留证书 如果操作数种有小数 那么保留小数

#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "interger division: 9.0 / 5.0 = " << 9 / 5  << endl;
    cout << " floating-point division 9.0 / 5.0 = " << 9.0 / 5.0 << endl;
    cout << "mixed division:  9.0 / 5 = "  << 9.0 / 5 << endl;
    cout << "double division: 1e7 / 9.0 = " << 1e7 / 9.0 << endl;
    cout << "float constants:  1e7f / 9.0 = " << 1e7f / 9.0f << endl; //浮点常量默认为double形，所以这条比上条精度高
    return 0;

 }