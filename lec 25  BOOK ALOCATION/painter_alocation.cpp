#include <iostream>
using namespace std;
int main()
{
    int arr[5]={5,10,20,35,36};
    int painter_num=3;
    int start=0;
    int end=0;
    for(int i=0;i<4;i++){    
        start=max(start,arr[i]); // start declare
        end+=arr[i];             //end determine
    }

      
     int mid,ans;
    while(start<=end)
    {   int wall_time = 0,painter=1;
        mid=(start+end)/2;
        
        
        for(int i=0;i<5;i++)
        {
            wall_time+=arr[i];
            if(wall_time>mid)
            {
             painter++;
             wall_time=arr[i];
                if(wall_time>mid)       // wall_time r jai hok mid er theke toh boro hote parbe na tai ei check    // last er man ta check korar jonno oita check hobe na ei condition na dile
                painter+=100; 
              
            }
        }
        if(painter<=painter_num)
        {
            ans=mid;
            end=mid-1;
        }
        else 
        start=mid+1;
    }
 
    cout <<ans;
}