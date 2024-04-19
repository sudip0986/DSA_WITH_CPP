#include <stdio.h>
int main()
{    int n;
 scanf("%d",&n);
    int arr[n];
   
    int sum=0,ans;
    for(int i =0; i<n-1; i++)
    {   scanf("%d",&arr[i]);
        sum+=arr[i];
        
    }
    ans=(n*(n+1))/2;
    int sec= ans-sum;
    printf("%d",sec);
    return 0;
}