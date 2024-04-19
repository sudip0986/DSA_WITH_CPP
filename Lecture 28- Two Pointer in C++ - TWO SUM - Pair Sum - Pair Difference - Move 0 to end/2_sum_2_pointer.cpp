#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int target=42;
    int arr[5]={2,8,11,15,27};
    vector<int>ans;
    int start=0,end=5-1;
    while(start<=end)
    {
        if(arr[start]+arr[end]==target)
        {
            ans.push_back(arr[start]),ans.push_back(arr[end]);
            break;
        }
        else if(arr[start]+arr[end]>target)
        end--;

        else 
        start++;

    }
    cout<<ans[0]<<" "<<ans[1];
}