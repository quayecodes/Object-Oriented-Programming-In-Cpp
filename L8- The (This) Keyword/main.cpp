#include <iostream>
#include "this.h"

using namespace std;

void creator()
{
    cout << "                   T H I S    Statement in C++" <<endl;
    cout << "Code By: Michael N.A Quaye              Email: millcode@outlook.com" <<endl;
    cout <<endl;
}

int main()
{
    creator();

    enroll about1;
    enroll about2("Benjamin Appiah", "BSc. Chemical Engineering", 100);
    enroll about3("Stanley Romeo", "BSc. Accounting and Finance", 100);
    cout << about1.student() <<endl;
    //cout << "Memory Allocation: " << &about1 <<endl;
    cout << about2.student() <<endl;
    //cout << "Memory Allocation: " <<&about2 <<endl;
    cout << about3.student() <<endl;

    return 0;
}
