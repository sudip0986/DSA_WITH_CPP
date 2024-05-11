#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    // input string 
    string s;
    cin>>s;
    int count=0;
    bool odd=0;

    // data entering 
    vector<int>lowercase(26,0),uppercase(26,0);
    for(int i=0; i<s.size(); i++)
    {
        // lowercase
        if(s[i]>='a')
        lowercase[s[i]-'a']++;

        //uppercase
        else
        uppercase[s[i]-'A']++;

        
    }

    // checking 

    for(int i=0; i<26; i++)
    {
        //lowecase

        // even
        if(lowercase[i]%2==0)
        count+=lowercase[i];
        //odd
        else
        {
            count+=lowercase[i]-1;
            odd=1;
        }

        // uppercase
        //for even
        if(uppercase[i]%2==0)
        count+=uppercase[i];
        //for odd
        else
        {
            count+=uppercase[i]-1;
            odd=1;
        }
    }

    //output
    if(odd==0)
    cout<<count;
    else
    cout<<count+1;
}