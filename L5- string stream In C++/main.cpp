#include <iostream>
#include <sstream> //String Stream Header!

using namespace std;

int main()
{
    string name = "Michael Nii Ayi Quaye";
    string school = "Ghana Communication Technology";
    string course = "BSc. Computer Science";
    int level = 100;
    int year = 2024;

    stringstream info;
    info << "Name: " + name <<endl;
    info << "School: " + school <<endl;
    info << "Programme: " + course <<endl;
    info << "Level: ";
    info << level <<endl;
    info << "Year Of Enrollment: ";
    info <<year <<endl;

    string details = info.str();
    cout << details <<endl;


    return 0;
}
