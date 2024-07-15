#include <bits/stdc++.h>
using namespace std;
int vowel(string s,int e)
{

    //base
    if(e==-1)
    return 0;
    
   return vowel(s,e-1) + bool((s[e]=='a' || s[e]=='e' || s[e]=='i' || s[e]=='o' || s[e]=='u'));
}

int main()
{
    string s = "rohit";

   

    cout<<vowel(s,4);
}