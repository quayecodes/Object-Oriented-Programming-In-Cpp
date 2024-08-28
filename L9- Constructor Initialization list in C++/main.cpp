#include <iostream>
#include "list.h"

using namespace std;

void creator()
{
    cout << "               Constructor initialization List In C++   "<<endl;
    cout << "Code By: Michael N.A Quaye                   Email: millcode@outlook.com" <<endl;
    cout <<endl;
}

int main()
{
    creator();

    about about1;
    about about2("Daniel Darko", "Koforidua");
    cout <<about1.person() <<endl;
    cout <<about2.person() <<endl;

    return 0;
}
