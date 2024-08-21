#include <bits/stdc++.h>
using namespace std;

class students
{
    public:
    string name;
     int age ,roll;
    string grade;
};

int main()
{
    students *s1 = new students;

    // (*s1).name = "SUDIP";
    s1->name  ="SUDIP";   // we can also write like this
    (*s1).age = 21;
    (*s1).roll = 12;
    (*s1).grade = "A+";

    cout<<(*s1).name<<" ; ";
    cout<<(*s1).age<<" ; ";
    cout<<(*s1).roll<<" ; ";
    cout<<(*s1).grade<<" ; ";

}