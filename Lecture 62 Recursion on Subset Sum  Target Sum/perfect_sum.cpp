#include <bits/stdc++.h>
using namespace std;

int find(int arr[], int index, int n, int target)
{
   //base
   if(target==0)
   return 1;
   if(index==n || target<0)
   return 0;

   return find(arr,index+1,n,target) + find(arr,index+1,n,target-arr[index]);
}

int main()
{
    int arr[]={5,2,3,6,10,8};
    int target=10;

    cout<<find(arr,0,6,target);
}