#include <iostream>
using namespace std;

int main()
{   int start,end,key,mid;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};    // must inculde elemens of array by sorting
    cout<<"enter the number of key:";
    cin>>key;
     start=0;
     end=9;
     
     
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            cout<<"the index is : "<< mid <<endl;
            break;
        }

        else if(arr[mid]<key)
        {
            start=mid+1;                // find right side
        }

        else
        {
            end=mid-1;                  // find left side
        }
    }

    if(start>end)
    cout<<"that keyword is not found";

    return 0;
}