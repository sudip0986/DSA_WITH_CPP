#include <bits/stdc++.h>
using namespace std;

void subset(int arr[],int index, int n,vector<vector<int>>&ans, vector<int>&temp,vector<int>&sum_ans,int sum)
{
    //base
    if(index==n)
    {
         sum_ans.push_back(sum);
        ans.push_back(temp);
        return;
    }
    //not included
    subset(arr,index+1,n,ans,temp,sum_ans,sum);
    //included
    temp.push_back(arr[index]);

    subset(arr,index+1,n,ans,temp,sum_ans,sum+arr[index]);
    temp.pop_back();
}

int main()
{
    int arr[]={3,4,5};

    vector<vector<int>>ans;
    vector<int>temp;
    vector<int>sum_ans;
    int sum=0;
     subset(arr,0,3,ans,temp,sum_ans,sum);

    for(int i=0; i<ans.size(); i++)
    {   cout<<'{';
        for(int j=0; j<ans[i].size(); j++)
        cout<<ans[i][j]<<" ";

        cout<<"}--->"<<sum_ans[i]<<endl;
    }

    /// nice code which is created by sudip basak
}