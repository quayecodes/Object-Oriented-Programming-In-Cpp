#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>

using namespace std;

class details
{
    public:
        details();
        string tostring();
        string getmail();
        string setschool();

    protected:

    private:
        string name;
        string mail;
        string school;
};

#endif // OBJECT_H
