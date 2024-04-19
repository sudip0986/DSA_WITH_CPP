#include <iostream>
using namespace std;
int main()
{
    int arr[6]={2,3,4,7,11,12};
    int start=0, end = 5, ans=-1 ,k,mid;
    cin>>k;
    while (start<=end)
    {
        mid=(start+end)/2;
        if ((arr[mid]-mid-1)>=k)
        {
            ans=mid;
            end=mid-1;
        }
        else 
        start =mid+1;
    }
    cout<<ans+k;
}