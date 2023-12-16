//
// Created by 77469 on 2023/12/11.
//
#include <iostream>
using namespace std;


using namespace std;




int main()
{

    int arr[9] = {1,2,2,6,6,6,6,7,10};
    int temp;
    int count1=0;
    float ar2[9];
    for (int i =0; i< 9; i++)
    {
        temp =arr[i];
        for (int j = 0; j <9; j++)
        {
            if (arr[j] == temp)
            {
                count1++;
            }
            else continue;
            ar2[i] = count1 ;
        }
        count1 =0;
    }

    for (int i = 0; i <9 ; i++)
    {
        float result = ar2[i]/9;
        if (result < 0.25)
            continue;
        else  temp= arr[i];
    }

    cout << temp <<endl;

    cout << "done.\n";

    return 0;
}


