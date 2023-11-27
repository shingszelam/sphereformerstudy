//
// Created by 77469 on 2023/11/26.
//
#include <iostream>
using namespace std;

int main()
{
    int quizscores[10]=
            {
            20, 20 ,20 ,20 , 20, 19,20 ,18,20  ,20
            };
    cout << "doing it righet:\n ";
    int i ;
    for (i=0; quizscores[i] == 20; i++)//这做法存在的问题 在i=5时式子不等于20 就跳出循环运行下一条指令了
        cout << "quiz" << i << "is a 20" << endl;

    //错误示范
    cout << "一种危险的做法:\n";
    for (i=0; quizscores[i] = 20; i++ ) //=为赋值语句，即quizscores一定会是20
        cout << "quiz" << i << "is a 20 \n" ;

    return 0;
}