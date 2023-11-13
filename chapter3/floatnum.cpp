
//
// Created by 77469 on 2023/11/11.
//

#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield) ; //fixed-point
    float tub = 10.0 / 3.0;
    double mint = 10.0/3.0 ;
    const float million = 1.0e6 ;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub << endl;
    cout << "and ten million tubs = " << 10 * million * tub << tub << endl;

    cout << "mint = " << mint;
    cout << " and million mints = " << million * mint << endl;
    return 0;
}