#include <bits/stdc++.h>
using namespace std;
void rev(string &str,int st, int end)
{
         //base
         if(st>=end)
         return;

        char c=str[st];
        str[st]=str[end];
        str[end]=c;

        rev(str, st+1, end-1);
   
}

int main()
{
    string str = "rohit";

   
     rev(str,0,4);
    cout<<str;
    
}