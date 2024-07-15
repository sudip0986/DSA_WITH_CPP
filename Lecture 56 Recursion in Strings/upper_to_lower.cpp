#include <bits/stdc++.h>
using namespace std;
void upper_to_lower(string &str,int index)
{
    //base
    if(index==-1)
    return;
      
      str[index]='A'+str[index]-'a';
      upper_to_lower(str, index-1);
}

int main()
{
    string str = "sudip";

   
     upper_to_lower(str,4);
    cout<<str;
    
}