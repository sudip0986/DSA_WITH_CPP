#include <iostream>
using namespace std;
int main()
{
    int n,mid,ans ;
    cout<<"enter the number of srt() :";
    cin>>n;
    if(n<2)
    mid=n;
    int start =0,end=n;
    while(start<=end)
    {
        mid = (start + end) / 2;
        
        if(mid*mid==n)
        {
            ans=mid;
            break;
        }
        else if(mid*mid>n)
        {
            ans=mid;
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
        
    }

    cout<<"the answer is : "<<ans;
}                         