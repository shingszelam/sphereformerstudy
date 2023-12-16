//
// Created by 77469 on 2023/12/11.
//
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int Limit = 5;
int main()
{
    ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open())
    {
        cout << "can't open " << fn << ".bye.\n";
        exit(EXIT_FAILURE);
    }

    double objective;
    cout << "enter the focal length of your "
            "telescope objective in nm: ";
    cin >> objective;
    double eps[Limit];
    cout << "enter the focal lengths. in mm, of " << Limit
    << " eyepieces:\n";
    for (int i =0; i < Limit; i++)
    {
        cout << "eyepiece # " << i+1 << ": ";
        cin >> eps[i];
    }
    file_it(fout, objective, eps, Limit);//将东西写道文件中
    file_it(cout , objective, eps, Limit);//将东西显示在屏幕上
    cout << "done\n";
    return 0;
}
void file_it(ostream & os, double fo, const double fe[], int n)
{
    ios_base::fmtflags initial;//os类中格式化方法，存储这种信息所需要的数据类型名称
    initial = os.setf(ios_base::fixed);//将对象置于使用定点表示法的方式
    os.precision(0);
    os << "focal length of objective: "<< fo << " mm\n";
    os.setf(ios::showpoint);//显示小数点的模式
    os.precision(1);//使用这个来显示几个小数
    os.width(12);
    os << "f.l. eyepiece";
    os.width(15);//显示下一字段输出时候的宽度 且仅对下一字段有效
    os << "magnification" << endl;
    for (int i = 0; i< n;i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << endl;
        os.setf(initial);//返回调用它之前有效的所有格式化设置
    }
}
