//
// Created by 77469 on 2024/3/10.
//
#include <iostream>
#include "stacktp.h"

template <template<typename T> class Thing>
class Crab
{
private:
    Thing<int> s1;
    Thing<double> s2;
public:
    Crab() {};
    //假定thing类中拥有pop以及Push成员
    bool push(int a, double x) {return s1.push(a) && s2.push(x);}
    bool pop(int & a, double & x) {return s1.pop(a) && s2.pop(x);}
};

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    Crab<Stack> nebula; //Stack必须匹配template<typename T> class Thing
    int ni;
    double nb;
    cout << "Enter int double pairs, such as 4 3.5 (0 0 to end):\n";
    while (cin >>ni >>nb &&  ni >0 && nb>0)
    {
        if (!nebula.push(ni, nb))
            break;
    }

    while (nebula.pop(ni, nb))
        cout << ni << ", " << nb << endl;
    cout << "Done.\n";
    return 0;
}