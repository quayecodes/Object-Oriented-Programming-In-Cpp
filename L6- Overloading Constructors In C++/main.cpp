#include <iostream>
#include "construct.h"
using namespace std;

int main()
{
    construct construct1;
    construct construct2("millcode.com");
    cout <<construct1.details() << endl;
    cout <<construct2.details() <<endl;
    return 0;
}
