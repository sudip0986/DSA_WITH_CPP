#include <bits/stdc++.h>
using namespace std;

bool checkpal(string s, int st, int e)
{

    //base
    if(st>=e)
    return 1;
    
    //not match 
    if(s[st]!=s[e])
    return 0;

    //match
    return checkpal(s,++st,--e);
}

int main()
{
    string s = "mom";

   

    cout<<checkpal(s,0,2);
}