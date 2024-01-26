//
// Created by 77469 on 2024/1/21.
//
#include <iostream>
#include <string>
#include <new>
using namespace std;
const int BUF=512;
class JustTesting
{
private:
    string words;
    int number;
public:
    JustTesting(const string & s  = "Just Testing", int n = 0)
    {
        words = s ; number = n; cout << words << " constructed\n";
    }
    ~JustTesting() {cout << words << " destroyed\n";}
    void Show() const {cout << words << ", " << number << endl;}
};
int main()
{
    char * buffer = new char[BUF]; //获得一块内存

    JustTesting *pc1, *pc2;

    pc1 =new (buffer) JustTesting; //将对象放在buffer中
    pc2 =new JustTesting("Heap1", 20);//将对象放在heap中

    cout << "Memory block addresses:\n" << "buffer: "
         << (void *) buffer << " heap: " << pc2 << endl;
    cout << "Memory contents:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;
//相较于1.cpp 调整了程序
    pc3 =new (buffer+sizeof (JustTesting)) JustTesting("Bad Idea", 6); //将对象放在buffer中 增加偏移量确保不会覆盖原pc1
    pc4 =new JustTesting("Heap2", 10);
    cout << "Memory contents:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();

    delete pc2;
    delete pc4;
    //为pc3,pc1显式的使用析构函数
    pc3->~JustTesting();
    pc1->~JustTesting();
    delete [] buffer;
    cout << "Done\n";
    return 0;

}