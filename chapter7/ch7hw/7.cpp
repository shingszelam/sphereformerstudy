//
// Created by 77469 on 2023/12/7.
//
#include <iostream>

using namespace std;

const int Max = 5;
double * fill_array(double ar[], int limit);
void show_array( double ar[], const double * );
void revalue(double r, double ar[], double * );

int main()
{
    double properties[Max];

    double * end = fill_array(properties, Max);
    show_array(properties, end);
    if (end > properties)
    {
        cout << "enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)) //输入一个数，如果是一个负数就可以进入到循环中
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "bad input; please enter a number: ";

        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout << "done.\n";
    cin.get();
    cin.get();
    return 0;
}

double * fill_array(double ar[], int limit)
{
    double temp;
    int i;
    for(i = 0; i < limit; i++)
    {
        cout << "enter value# " << (i+1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "bad input; input process terminated.\n";
            break;
        }
        else if (temp <0)
            break;
        ar[i] = temp;
    }

    double * pa = &ar[i-1];//如果此处设置为ar[i] 则取得是数组之外的地址 因为此处for循环之外i++  =  limit
    return pa;
}

void show_array( double ar[], const double * pe)
{
    double * pp = ar;
    int i=0;
    for (pp = ar , i ; pp <= pe; pp++,i++)
    {
        cout << "property #" << (i + 1) << ":$ ";
        cout << *pp << endl;
    }
}

void revalue(double r, double ar[], double * pe)
{
    double * pp = ar;
    for (pp; pp <= pe; pp++)
        *pp *= r;
}
