//
// Created by 77469 on 2023/11/24.
//
#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar
{
    string brand;
    float weights;
    int calori;

};

int main()
{
    /****5
    CandyBar snack =
            {
            "Mocha Munch",
            2.3,
            350
            };
    cout << "snack's brand is " << snack.brand <<endl;
    cout << "snack's weight is " << snack.weights << endl;
    cout << "snack's calori is " << snack.calori << endl; ****/

    /***6
    CandyBar snack2[3] = {
            {"s1", 3.6, 108},
            {"s2", 11.2, 725},
            {"s3", 6.9, 2000}
    };
    cout << "snack2's first is " << snack2[0].brand << " and it's weights is " << snack2[0].weights
    << ", it's calori is " << snack2[0].calori <<endl;
    cout << "snack2's second is " << snack2[1].brand << " and it's weights is " << snack2[1].weights
         << ", it's calori is " << snack2[1].calori << endl;
    cout << "snack2's third is " << snack2[2].brand << " and it's weights is " << snack2[2].weights
         << ", it's calori is " << snack2[2].calori << endl; ***/


    //第九题
    CandyBar * pc = new CandyBar[3];
    pc[0] = {"s1", 3.6, 108};
    pc[1] = {"s2", 11.2, 702};
    pc[2] = {"s3", 57.11, 110};
    cout << "snack2's third is " << pc[2].brand << " and it's weights is " << pc[2].weights
         << ", it's calori is " << pc[2].calori << endl;
    cout << "snack2's second is " << pc[1].brand << " and it's weights is " << pc[1].weights
         << ", it's calori is " << pc[1].calori << endl;
    cout << "snack2's first is " << pc[0].brand << " and it's weights is " << pc[0].weights
         << ", it's calori is " << pc[0].calori << endl;

    delete pc;

    return 0;
}