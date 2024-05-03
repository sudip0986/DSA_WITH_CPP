#include <iostream>
#include <string>
#include <vector>
using namespace std ;
int main()
{
    vector<int>alpha(26,0);
    
    string s;
    string ans;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        alpha[s[i]-'a']+=1;
    }

    for(int i=0; i<26; i++)
    {
        char c='a'+i;
        while(alpha[i])
        {
            ans+=c;
            alpha[i]--;
        }
    }

    cout<<ans;
}