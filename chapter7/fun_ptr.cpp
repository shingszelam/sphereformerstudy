//
// Created by 77469 on 2023/12/2.
//
#include <iostream>
using namespace std;

double bytsy(int);
double pam(int);

void estimate(int lines, double (*pf)(int));

int main()
{
    int code;
    cout <<  "how many lines of code do you need? ";
    cin >> code;
    cout << "here's betsy's estimate:\n";
    estimate(code,bytsy);
    cout << "here's pam's estimate:\n";
    estimate(code, pam);
    return 0;
}

double pam(int lns)
{return 0.03 * lns + 0.0004* lns*lns;}

double bytsy(int lns)
{
    return 0.05*lns;
}

void estimate(int lines, double (*pf)(int))
{
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hours\n";

}