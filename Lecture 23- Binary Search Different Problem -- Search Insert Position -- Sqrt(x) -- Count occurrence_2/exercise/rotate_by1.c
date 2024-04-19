#include <stdio.h>
int main()
{   int i;
    int arr[7]={2,9,4,11,9,4,17};
    int arrr[7];
    int temp=arr[6];
    arrr[0]=temp;
    for(i=0;i<7-2;i++)
    {
        arrr[i+1]=arr[i];
    }
    
    for(int j=0 ;j<7 ;j++)
    printf("%d ",arrr[j]);
}