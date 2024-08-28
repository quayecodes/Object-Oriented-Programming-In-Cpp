#include "object.h"

details::details()
{
    name = "Michael Quaye Nii Ayi";
    mail = "millcode@outlook.com" ;
    school = "Ghana Communication Technology University (GCTU)";
}

string details::tostring()
{
    return "Code by: " + name;
}

string details::getmail()
{
    return mail;
}

string details::setschool()
{
    return school;
}
