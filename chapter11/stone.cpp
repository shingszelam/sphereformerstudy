//
// Created by 77469 on 2024/1/3.
//
#include <iostream>

using std::cout;

#include "stonewt.h"

void display(const Stonewt & st, int n);

int main() {
    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);

    cout << "The celebrity weighed ";
    incognito.show_sth();
    cout << "The detective weighed ";
    wolfe.show_sth();
    cout << "The President weighed ";
    taft.show_lbs();
    incognito = 276.8;
    taft = 325;
    cout << "After dinner, the celebrity weighed ";
    incognito.show_sth();
    cout << "After dinner, the President weighed ";
    taft.show_sth();
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";
    return 0;
}

void display(const Stonewt &st, int n) {
    for (int i = 0; i < n; i++) {
        cout << "WoW!";
        st.show_sth();
    }
}