//
// Created by 77469 on 2023/11/9.
//
#include <iostream>
#define ZERO 0 //使得ZERO这个标志的值为0
#include <climits>

using namespace std;

int main()
{
    short sam = SHRT_MAX; //初始化这个变量为最大值
    unsigned short sue = sam; //其实两个边界不同 sam 边界为-3268~3267 而sue的边界为0~65535 所以此处赋值没有问题

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << "dollars deposited." << endl
         << "Add $1 to each count" << endl << "Now ";
    sam = sam + 1; //在此处 因为sam已经到达了最大边界 所以sam再加一就到了-3268
    sue = sue + 1;
    cout << "sam has " << sam << " dollars and sue has " << sue;
    cout << "dollars deposited.\nPOOR SAM" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "sam has " << sam << " dollars and sue has " << sue;
    cout << "dollars deposited." << endl
         << "Take $1 to each count" << endl << "Now ";
    sam = sam - 1;
    sue = sue - 1; //而在此处 sue是一个无符号值， 所以0-1并不会得到一个负值 而是得到65525
    cout << "sam has " << sam << " dollars and sue has " << sue;
    cout << "dollars deposited" << endl << "lucky sue!" << endl;
    return 0;
}
