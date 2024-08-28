#include "about.h"
#include <sstream>

about::about()
{
    name = "Michael Quaye";
    age =19 ;
}

string about::details()
{
  stringstream info;

  info << "Name: ";
  info << name <<endl;
  info << "Age: ";
  info << age << " years"<<endl;

  return info.str();
}
