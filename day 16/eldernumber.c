#include <stdio.h>
int main()
{
int arr[5]={5,4,3,2,1};
int ans =__WINT_MIN__;
for(int i =0; i<5;i++)
{
 if(arr[i]>ans)
  ans=arr[i];
 }

printf("%d",ans);
return 0;
}
