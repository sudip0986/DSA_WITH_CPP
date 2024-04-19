#include <iostream>
using namespace std;

int binary_search(int arr[], int n , int key)
{
     int start=0;
     int end=n-1 ;
     int mid;
     
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
         return mid ;

        else if(arr[mid]<key)
         end=mid-1;                // find left side
        

        else
         start=mid+1;                  // find right side
        
    }

     return -1;
}

int main() 
{   int n,i,key;
    int arr[1000];
    cout<<"enter the number of array :";
    cin>>n;
    for( i=0; i<n; i++){
        cin>>arr[i];               // must inculde elemens of array by sorting
    }

    cout<<"enter the kew which inndex you want:";
    cin>>key;

    cout<<"the index of key is : "<<binary_search(arr,n,key);

    return 0;
}