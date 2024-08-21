#include <bits/stdc++.h>
using namespace std;

class students
{
    string name;
    int age ,roll;
    string grade;
    // function getter and setter 
    public:
    void setname(string s)
    {
        name=s;
    }
    void setage(int a)
    {
        age=a;
    }
    void setroll(int r)
    {
        roll=r;
    }
    void setgrade(string g)
    {
        grade=g;
        cout<<grade<<" ";
    }

    // print function
    void getname(){
        cout<<name<<" ";
    }
};

int main()
{
    students s1;
    s1.setname("sudip");
    s1.setage(21);
    s1.setroll(12);
    s1.setgrade("A+");

    // /print 
    s1.getname();
}