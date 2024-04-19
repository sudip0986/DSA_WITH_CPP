#include <iostream>
using namespace std;
int main()
{
    string s1 = "Rohit", s2 = "_Mohit";
    // string s3 =s1+s2;          // 1st way to add

    s1.push_back('p');
    cout<<s1<<endl;          //'p' already gone in s1 //s1={(rohit + p)=rohitp}

    s1.pop_back();           // for pop_back Here last word 'p' get delete  // s1={rohitp-p=rohit}
    cout<<s1<<endl;

    s1.append(s2);          // s1= {rohit + _mohit =Rohit_Mohit}  //_mohit added by follow append rulls
    cout<<s1<<endl;
    
}