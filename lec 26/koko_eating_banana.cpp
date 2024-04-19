#include <iostream>
using namespace std;
int main()
{
    int banana[4]={3,6,11,7}   ,  hour=8;    // given data
    int start=0,end=0,mid,time;
    for(int i=0 ;i<4;i++)
    {
        start+=banana[i];
        end=max(end,banana[i]);
    }
    int ans;
    
    start/=hour;
cout<<start<<" "<<end<<endl;

    while(start<=end)
    {
        
        mid=start+(end-start)/2;
        int total_time=0;
        for(int i=0;i<4;i++)
        {
            total_time+=banana[i]/mid;
            if(banana[i]%mid)
            total_time++;

        }
        if(total_time>hour)
        start=mid+1;
        else 
        {
            ans=mid;
        end=mid-1;
        }
    }
    cout<<ans;
}