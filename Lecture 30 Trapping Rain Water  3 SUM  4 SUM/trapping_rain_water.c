#include <stdio.h>
int main()
{
   
    int building_hight[8]={4,2,0,5,2,6,2,3};
    int lmax[8];                    //0 4 4 4 5 5 6 6 
    lmax[0]=0;
    int rmax[8];                    //6 6 6 6 6 3 3 0
    rmax[8-1]=0;
    int water=0;

    

    // lest sight big building 
    for(int i =1; i<8; i++)
    {
       if(lmax[i-1]<building_hight[i-1])
       lmax[i]=building_hight[i-1];
       else
       lmax[i]=lmax[i-1];
    }

    // right sight big building 
    for(int i=8-2; i>=0 ;i--)
    {
        if(building_hight[i+1]>=rmax[i+1])
        rmax[i]=building_hight[i+1];
        else
        rmax[i]=rmax[i+1];

    }


    //  for(int i =0; i<8; i++)
    //   printf("%d",rmax[i]);

    //   for(int i =0; i<8; i++)
    //   printf("%d ",lmax[i]);

    //calculating trapping water
    for(int i=0; i<8; i++)
    {
        if(lmax[i]>rmax[i])
        {int min =rmax[i]-building_hight[i];
        if (min>=0)
        water+=min;
        }
        else
        {int min =lmax[i]-building_hight[i];
        if (min>=0)
        water+=min;
        }
    }

printf("total trapping water are = %d",water);

    
}