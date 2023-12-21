//
// Created by 77469 on 2023/12/19.
//
#include <iostream>
#include "2.h"
#include <cstring>

int main() {
    Person person1;
    person1.Show();

    Person person2 = {"Smythecrraft"};
    person2.Show();

    Person person3 = {"Dimwiddy", "Sam"};
    person3.Show();
    person3.FormalShow();
    return 0;
}