//
// Created by 77469 on 2024/1/7.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

#include "2.h"

int main() {
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));//随机种子生成
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    Vector cat(3,4);

    //写入到文本文件中 使用ofstream类
    ofstream outFile;
    outFile.open("steps.txt");


    //计算平均的东西
    unsigned long maxstep;
    unsigned long minstep;
    unsigned long sumstep = 0;
    double averagestep = 0;
    int i = 0;


    cout << "Enter target distance(q to quit): ";
    while (cin >> target) {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;


        //写入文件第一个行
        outFile << "Target Distance: " << target << ", " << "Step size " << dstep << endl;

        while (result.magval() < target) {
            direction = rand() % 360; //随机种子 所以每次输入的东西相同，结果也会不同
            step.reset(dstep, direction, Vector::POL);
            outFile << steps << ": " << result << endl;
            result = result + step;
            steps++;
        }

        if (i==0)
        {
            maxstep = steps;
            minstep = steps;
        } else
        {
            if (steps >= maxstep)
                maxstep = steps;

            if (steps <= minstep)
                minstep = steps;
        }
        ++i;

        sumstep += steps;
        averagestep = sumstep / i;

        outFile << "After " << steps << " steps, the subject "
                                        "has the following location:\n";
        outFile << result << endl;
        result.polar_mode();
        outFile << " or\n" << result << endl;
        outFile << "Average outward distance per step = "
                << result.magval() / steps << endl;
        outFile << "-------------------------------------"<<endl;

        cout << "Now, maxstep is " << maxstep << endl;
        cout << "Now, minstep is " << minstep << endl;
        cout << "Now, averagestep is " << averagestep << endl;

        steps = 0;
        result.reset(0.0, 0.0);


        cout << "Enter target distance(q to quit): ";
    }



    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}