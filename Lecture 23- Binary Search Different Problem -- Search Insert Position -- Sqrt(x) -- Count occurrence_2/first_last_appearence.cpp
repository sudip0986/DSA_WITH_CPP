#include <iostream>
using namespace std;
int main()
{
    int arr[8]={2,3,3,3,3,4,5,6};     // search 3 first apperance
    int start=0,end=8-1,firstapp=-1,lastapp=-1;
    while(start<=end)
    {
        int mid =(start+end)/2;
        if(arr[mid]==3)
        {
            firstapp=mid;
            end=mid-1;
        }
        else if(arr[mid]<3)
        start=mid+1;
        else
        end=mid-1;
    }
    // Finding last occurrence of 3
     start=0;
     end=8-1;
        while(start<=end)
    {
        int mid =(start+end)/2;
        if(arr[mid]==3)
        {
            lastapp=mid;
            start=mid+1;
      
        }
        else if(arr[mid]<3)
       start=mid+1;
        else
        end=mid-1;
    }
    cout<<"the firstapp is: "<<firstapp<<endl;
    cout<<"the lastapp is: "<<lastapp;
}