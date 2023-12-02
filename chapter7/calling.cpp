//
// Created by 77469 on 2023/12/1.
//
#include <iostream>

void simple();

using namespace std;

int main()
{
    cout << "main() will call the simple() function:\n";
    simple();
    cout << "main() is finished with the simple() function.\n";
    return 0;
}

void simple()
{
    cout << "i'm but a simple function." <<endl;
}


