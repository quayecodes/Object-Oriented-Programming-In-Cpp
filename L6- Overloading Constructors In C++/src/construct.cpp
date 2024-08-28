#include "construct.h"
#include <sstream>

construct::construct()
{
   name = "Michael Nii Ayi Quaye" ;
   school = "Ghana Communication Technology University" ;
   year = 2024;
}

string construct::details()
{
    stringstream info;

    info << "Name: ";
    info << name <<endl;
    info << "School: ";
    info << school <<endl;
    info << "Year Of Enrollment: ";
    info <<year <<endl;

    return info.str();
}
