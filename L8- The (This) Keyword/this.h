#ifndef THIS_H
#define THIS_H

#include <iostream>
using namespace std;

class enroll
{
    public:
        enroll();
        enroll(string name, string course, int level);
        string student();

    protected:

    private:
        string name;
        string course;
        int level;
};

#endif // THIS_H
