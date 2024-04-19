#include <iostream>
using namespace std;
int main()
{
    int arr[4]={12,34,67,91};
    int start=0;
    int end=0;
    for(int i=0;i<4;i++){    
        start=max(start,arr[i]); // start declare
        end+=arr[i];             //end determine
    }
    int mid,ans=0,students=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    while(start<=end)
    {
        mid=(start+end)/2;
        int page=0,count=1;
        for(int i=0; i<n;i++)
        {
            page+=arr[i];
            if(page>mid)
            {
                count++;
                page=arr[i];    //when students are 3 but when mid is 90 && arr[3]=91 which directly input in count 3 whithout checking 
                if(page>mid)       //  // last er man ta check korar jonno oita check hobe na ei condition na dile////////////////////////
                count+=100;       // the reason is if count 3 geathered 91 and checking mid [page] 90 then it distroy the count which is greater than student that is why we need to increase mid [page] number
            }
        }
        
        if(count<=students)
        {
            ans=mid;
            end=mid-1;
        }
        else 
        start=mid+1;
        
        
    }
    cout<<ans;
    return 0;
}