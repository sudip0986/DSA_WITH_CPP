#include <iostream>
#include <string>
using namespace std ;

void clockwise(string &s1)              //taking Leetcode
{
    char c = s1[s1.size()-1];
    for(int i = s1.size()-2; i>=0; i--)
    {
        s1[i+1]=s1[i];
       
    }
         s1[0]=c;
}

void anticlockwise(string &s2)           // taking Amazon
{
    char c = s2[0];
    int  index =1;
    while(index<s2.size())
    {
        s2[index-1]=s2[index];
        index++;
    }
    s2[s2.size()-1]=c;
        
}

int main()
{
    string s1="Leetcode";  //  rotated it clockwise for two time
    string s2="Amazon";       //  rotated it anti_clockwise for two time

    clockwise(s1);
     cout<<s1<<endl;

    clockwise(s1);
    cout<<s1<<endl;

    anticlockwise(s2);  // pass it as a reference
    cout<<s2<<endl;    
    anticlockwise(s2);        // pass it as a reference
    cout<<s2;
}
