#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int target=22;
    vector<int>ans;
    int arr[5]={2,7,11,15,27};
    for(int i=0; i<5-1; i++)
    for(int j=i+1; j<5; j++)
    {
        if(arr[i]+arr[j]==target)
        {
            ans.push_back(arr[i]),ans.push_back(arr[j]);
            
            break;
        }
    }

    cout<<ans[0]<<" "<< ans[1];
}