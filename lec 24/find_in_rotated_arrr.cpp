#include <iostream>
using namespace std;
int main()
{
    int arr[6]={4,5,0,1,2,3};
    int target;
    cin>>target;
    int start =0,end=5,mid,index=-1;
    while(start<=end)
    {
        mid=(start + end)/2;
        if (arr[mid]==target)
        {
            index=mid;
        break;

        }
            // left sight
        else if(arr[mid]>=arr[start])
        {
            if(arr[start]<= target && target <= arr[mid])
            end=mid -1;
            else 
            start=mid + 1;
        }

        // right  sight
        else 
        {
            if(arr[mid]<=target && target <=arr[end])
            start=mid+1;
            else 
            end =mid-1;
        }
        
    }
    cout<< index;
}