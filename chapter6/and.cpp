//
// Created by 77469 on 2023/11/28.
//
#include <iostream>
const int ArSize = 6 ;

using namespace std;

int main()
{
    float naaq[ArSize];
    cout << "Enrer the NAAQs (New Age Awareness Quotients) "
         << "of \n your neigbors. Program terminates "
         << "when you make\n" << ArSize << " entries "
         <<"or enter a negative value.\n";
    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while (i<ArSize && temp>0)
    {
        naaq[i] = temp;
        ++i;
        if (i < ArSize)
        {
            cout << "Next value: ";
            cin >> temp;
        }
    }
    if (i==0) //如果直接输入负值 就不会进入到while循环中去 i就不会增加 就会无数据输出
        cout << "No data--bye\n";
    else
    {
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j< i; j++)
            if (naaq[j] > you) //来判断第二个条件，使用naaq中的数组来和我的年龄进行比较
                ++count;
        cout << count;
        cout << "  your neighbors have greater awareness of \n"
             <<"the New Age than you do.\n";
    }
    return 0;
}