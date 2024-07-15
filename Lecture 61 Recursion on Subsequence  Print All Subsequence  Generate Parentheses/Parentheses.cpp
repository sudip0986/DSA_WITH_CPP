#include <bits/stdc++.h>
using namespace std;

void subset(int n, int left, int right, vector<string>&ans , string &temp)
{
    if(left==n && right==n)
    {
        ans.push_back(temp);
        return;
    }

    //Left Parentheses
   if(left<=n)
   {
     temp.push_back('(');
    subset(n,left+1, right,ans,temp);
    temp.pop_back();
   }

    if(left>=right)
    {
        temp.push_back(')');
        subset(n,left,right+1,ans,temp);
        temp.pop_back();
    }
}

int main()
{
    int n;
    cin>>n;
    vector<string>ans;
    string temp;


    subset(n,0,0, ans, temp);

    //display

    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<endl;
}