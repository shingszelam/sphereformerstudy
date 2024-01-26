//
// Created by 77469 on 2024/1/21.
//
#include <iostream>
#include "1.h"

int main()
{
    using namespace std;
    Cow c1;
    c1.ShowCow();

    Cow c2("cow2", "singing", 20);
    c2.ShowCow();

    Cow c3(c2);
    c3.ShowCow();

    Cow c4;
    cout << "更改前c4为什么？" <<" c4: " << endl;
    c4.ShowCow();
    Cow c5 ("cowcow", "dancing", 17);
    c4 = c5;
    cout << "更改后c4为什么？" << " c4: " << endl;
    c4.ShowCow();

    return 0;


}
