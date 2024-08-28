#include <iostream>>
#include "practice.h"

using namespace std;

home::home()      // Contractive Command!
{
    cout << "Starting............." <<endl;
}

void home:: menu()
{
    cout << "         I love Objected Orriented Programming In C++" <<endl;
    cout << "I               *" <<endl;
    cout << "L              ***" <<endl;
    cout << "O             *****" <<endl;
    cout << "V            *******" <<endl;
    cout << "E           *********" <<endl;
    cout << "C          ***********" <<endl;
    cout << "+         *************" <<endl;
    cout << "+        ***************" <<endl;

}

home::~home()       // Destructive Command!
{
    cout << "                                                   Ended!---------------" <<endl;
}

