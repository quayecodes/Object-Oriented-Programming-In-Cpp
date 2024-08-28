#include "this.h"
#include <sstream>

enroll::enroll()
{
    name = "Michael Quaye";
    course = "BSc. Computer Science";
    level = 100;
}

enroll::enroll(string name, string course, int level)
{
   this -> name = name;
   this -> course = course;
   this -> level = level;

   //cout << "Memory Allocation: " <<this <<endl;
}

string enroll::student()
{
    stringstream id;

    id << "Name: " ;
    id << name <<endl;
    id << "Programme: ";
    id << course <<endl;
    id << "Level: ";
    id << level <<endl;

    return id.str();
}
