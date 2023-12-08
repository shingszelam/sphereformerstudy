//
// Created by 77469 on 2023/12/5.
//
#include <iostream>
#include <array>
using namespace std;

int Max = 10;

int in_grade(double arr[], int size);
void show_grade(double average[], int );
double average(const double arr[], int size);

int main()
{
    double grade[Max];
    int count = in_grade(grade, Max);
    show_grade(grade, count);
    cout << "平均分为： " << average(grade, count);
    return 0;
}

int in_grade(double arr[], int size)
{
    double temp;
    int i;
    for(i = 0; i < size ; i++)
    {
        cout << "输入成绩 # " << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "无效输入"<<endl;
            break;
        }
        else if (temp < 0 ) //输入结束信号
            break;
        arr[i] = temp;

    }
    return i;

}

void show_grade(double average[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << "第 " << (i + 1) << " 次成绩为： " << average[i]<< endl;
    }
}

double average(const double arr[], int count)
{
    double sum=0;
    for (int i = 0; i < count ; i++)
    {

        sum += arr[i];
    }
    double average = sum / (count);
    return average;
}