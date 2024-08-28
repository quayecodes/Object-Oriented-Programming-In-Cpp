#include <iostream>
#include "about.h"

using namespace std;

void creater()
{
    cout << "              O V E R L O A D I N G   C O N S T R U C T O R S In C++                "<<endl;
    cout << "Code By: Michael Quaye Nii Ayi               Date: Tue, 2/07/24" <<endl;
    cout <<endl;
}

int main()
{
    creater();

    about About;
    about About1("Eric Quaye", 16);
    about About3("Albert Quaye", 68);
    cout << About.details() <<endl;
    cout << About1.details() <<endl;
    cout << About3.details() <<endl;
    return 0;
}
