#include <iostream>
using namespace std;
int main()
{
    int arr[6]={1,4,45,6,10,8};
    int x=24;

    for(int i=0 ; i<4; i++)
    for(int j=i+1; j<5; j++)
    {
        int find=x-(arr[i]+arr[j]);
        int start=j+1 , end=6-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(find==arr[mid])
            {
                cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[mid]<<" = "<<x;
                break;
                
            }

            else if(find<mid)
            end=mid-1;
            else
            start=mid+1;
        }
    }

    
}