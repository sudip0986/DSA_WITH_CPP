#include <iostream>
using namespace std;
int main()
{
    int stall[5]={1,2,4,8,9};         // here 1,2,4,8,9 are distance of satall
    //let given array is in short form othwise first short the array
    
    int num_of_cow=3;
    int start=INT8_MAX,end=0;
    int last_len;
    int ans;
    for(int i=0;i<5;i++)
    {
        start=min(start,stall[i]);         //first position determine
        end=max(end,stall[i]-start);       // last position determine
    
    }
    
    
    
    while(start<=end)
    {
        int mid=(start+end)/2;
        int count=1,position=stall[0];  // 1st goru nisi 1st positon a bosai disi
        
        for(int i=0; i<5; i++)
        {
            
            if(stall[i]>=position+mid)
            {
                count++;                   // next goru
                position=stall[i];        // tar position
            }
            
        }
    if(count<num_of_cow)          // goruder besi dure rakha hoye geche
    {
         end=mid-1;
    }
    
    else                           // hoy space thik ache nahole besi kachakachi rakha hoye geche
    {
        ans=mid;               
    start=mid+1;
    }
   

       
     
    }
    cout<<ans<<endl;
}