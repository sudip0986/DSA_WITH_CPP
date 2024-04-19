#include <iostream>
using namespace std;
int main()
{
    int arr[6]={3,2,2,4,1,4};
    int day_num=3;
    int start=0;
    int end=0;
    for(int i=0;i<6;i++){    
        start=max(start,arr[i]); // start declare
        end+=arr[i];             //end determine
    }

      
     int mid,ans;
    while(start<=end)
    {   int kg = 0,day=1;
        mid=(start+end)/2;
        
        for(int i=0;i<6;i++)
        {
            kg+=arr[i];
            if(kg>mid)
            {
                day++;
              kg=arr[i];
              
            }
        }
        if(day<=day_num)
        {
            ans=mid;
            end=mid-1;
        }
        else 
        start=mid+1;
    }
 
    cout <<ans;
}