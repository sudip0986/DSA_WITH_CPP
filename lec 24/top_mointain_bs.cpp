#include <iostream>
using namespace std;
int main()
{
    int arr[6]={4,6,8,10,8,5};
    int start = 0 ,end=sizeof(arr)/sizeof(arr[0])-1;
    
    while(start<=end)
    {
        int mid=start+ (end -start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<arr[mid];
            break;
        }
        
        else if(arr[mid]>arr[mid -1])
        start=mid+1;
        else
        end =mid-1;
    }
}