#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    vector<bool>count(256,0);
    int len=0;

    int first=0, second=0;
    while(second<s.size())
    {

        while(count[s[second]])
        {
            count[s[first]]=0;         // erease repeating value
            first++;
        }

        count[s[second]]=1;
        len=max(len, second-first+1);
        second++;
    }

    cout<<len;
}