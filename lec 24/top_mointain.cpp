#include <iostream>
using namespace std;
int main()
{
    int arr[7]={1,2,3,4,5,4,3};
    int ans;
    for(int i =0; i<7; i++)
    {
        if(arr[i]<arr[i+1])
        ans=arr[i+1];
        else 
        break;
    }
    cout<<ans;
}
