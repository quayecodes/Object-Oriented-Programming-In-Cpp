#ifndef ABOUT_H
#define ABOUT_H

#include <iostream>
using namespace std;

class about
{
    public:
        about();
        about(string Nname, int Nage)
        {
            name= Nname;
            age =Nage;
        }
        string details();

    protected:

    private:
        string name ;
        int age ;
};

#endif // ABOUT_H
