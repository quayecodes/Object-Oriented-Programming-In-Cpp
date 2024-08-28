#include <iostream>>
#include "object.h"

using namespace std;

int main()
{

    // Program for setters and getters in C++
    details details1;

    cout << details1.tostring() <<endl;
    cout << "Email: " <<details1.getmail() <<endl;
    cout << "Attends: " <<details1.setschool() <<endl;

    return 0;
}
