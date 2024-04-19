// find small number 
#include <iostream>
using namespace std;
int main()
{
int arr [6]={4,6,8,10,1,2};
int start=0,end=5,mid,ans=arr[0];
while(start<=end)
{
    mid = start +(end-start)/2;
    //left sight sorted
    if (arr[mid]>=arr[0])
    start=mid+1;
    //RIGHT sight sorted
    else{
        ans=arr[mid];
        end=mid-1;
    }
}
cout << ans;
}
   