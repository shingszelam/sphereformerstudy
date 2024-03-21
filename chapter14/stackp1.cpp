//
// Created by 77469 on 2024/3/9.
//

#include "stackp1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

const int Num = 10;
int main()
{
    std::srand(std::time(0)); //随机序列
    std::cout << "Please enter stack size: ";
    int stacksize;
    std::cin>> stacksize;
    //创造一个stacksize大小的空栈
    Stack<const char * > st (stacksize);

    //接收篮子
    const char * in[Num] = {
            " 1: Hank Gilgamesh", " 2: Kiki Ishtar",
            " 3: Betty Rocker", " 4: Ian Flagranti",
            " 5: Wolfgang Kibble", " 6: Portia Koop",
            " 7: Joy Almondo", " 8: Xaverie Paprika",
            " 9: Juan Moore"," 10: Misha Mache"
    };

    //发出篮子
    const char * out[Num];

    int processed = 0;
    int nextin = 0;
    while (processed< Num)
    {
        if (st.isempty())
            st.push(in[nextin++]);
        else if (st.isfuul())
            st.pop(out[processed++]);
        else if (std::rand() % 2 && nextin < Num)
            st.push(in[nextin++]);
        else
            st.pop(out[processed++]);
    }
    for (int i =0; i< Num; i ++)
        std::cout << out[i] << std::endl;

    std::cout << "Bye.\n";
    return 0;
}