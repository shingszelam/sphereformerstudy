//
// Created by 77469 on 2023/12/19.
//
#include <iostream>
#include "5.h"

int main()
{
    using namespace std;
    Stack st;
    char ch;
    char name;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    customer po;
    static int sum = 0;
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
            case 'A':
            case 'a':cout << "Enter a po's name: ";
                cin.get(po.fullname, 35);
                cout << "Enter a po's payment: ";
                cin >> po.payment;
                if (st.isfull())
                    cout << "Stack already full\n";
                else
                    st.push(po);
                break;
            case 'P':
            case 'p':if (st.isempty())
                    cout << "stack already empty\n";
                else{
                    st.pop(po);
                    cout << "PO#  " << po.fullname << " popped, ";
                    sum += po.payment;
                    cout << "Payment sum is " << sum << endl;
                }
                break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "bye\n";
    return 0;
}