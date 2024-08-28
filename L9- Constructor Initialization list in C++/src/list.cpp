#include "list.h"
#include <sstream>

string about::person()
{
    stringstream id;

    id << "Name: ";
    id << name <<endl;
    id << "Home Town: ";
    id << hometown <<endl;

    return id.str();
}
