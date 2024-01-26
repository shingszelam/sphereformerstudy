//
// Created by 77469 on 2024/1/3.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

#include "vect.h"

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

    //写入到文本文件中 使用ofstream类
    ofstream outFile;
    outFile.open("steps.txt");


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
        outFile << "After " << steps << " steps, the subject "
                                     "has the following location:\n";
        outFile << result << endl;
        result.polar_mode();
        outFile << " or\n" << result << endl;
        outFile << "Average outward distance per step = "
             << result.magval() / steps << endl;
        outFile << "-------------------------------------"<<endl;
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