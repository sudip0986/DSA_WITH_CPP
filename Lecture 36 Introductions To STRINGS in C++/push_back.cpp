#include <iostream>
using namespace std;
int main()
{
    string s1 = "Rohit", s2 = "_Mohit";
    string s3 =s1+s2;          // 1st way to add
    s1.push_back('p');
    cout << s1 <<endl;
    cout<<s3;
}