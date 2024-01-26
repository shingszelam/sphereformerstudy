//
// Created by 77469 on 2024/1/26.
//
#include <iostream>
#include "brass.h"

int main()
{
    using std::cout;
    using std::endl;

    Brass Piggy("Porcelot Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);

    Piggy.ViewAcct();
    cout << endl;

    Hoggy.ViewAcct();
    cout << endl;

    cout <<"Depositing $1000 into the Hogg Account:\n";
    Hoggy.Deposit(1000.0);
    cout << "New balanced: $" << Hoggy.Balance() << endl;
    cout <<"Withdrawing $ 4200 form the Pigg Account:\n";
    Piggy.Withdraw(4200.00);
    cout << "Pigg account balance: $" << Piggy.Balance() << endl;
    cout <<"Withdrawing $ 4200 form the Hogg Account:\n";
    Hoggy.Withdraw(4200);
    Hoggy.ViewAcct();

    return 0;

}