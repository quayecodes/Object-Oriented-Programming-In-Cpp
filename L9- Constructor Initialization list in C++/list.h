#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

class about
{
    public:
        about():name("Michael Quaye"),hometown("Osu"){};
        about(string name, string hometown): name(name), hometown(hometown) {};
        string person();

    protected:

    private:
        string name;
        string hometown;

};

#endif // LIST_H
