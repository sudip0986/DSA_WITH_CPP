#include<iostream>
#include <vector>
using namespace std;
int main()
{
      int target=47;
    int arr[6]={2,3,5,10,50,80};
    vector<int>ans;
    int start=0,end=1;
    while(start<=end)
    {
        if(arr[end]-arr[start]==target)
        {
            ans.push_back(arr[start]),ans.push_back(arr[end]);
            break;
        }
        else if(arr[end]-arr[start]<target)
        end++;

        else 
        start++;

        if(start==end)
        end++;

    }
    cout<<ans[0]<<" "<<ans[1];
}