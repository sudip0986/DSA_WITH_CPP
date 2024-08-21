#include <bits/stdc++.h>
using namespace std;

int subset(int arr[],int index, int sum, int n)
{
    //base case
    if(sum==0)
    return 1;
    

    else if(index==n || sum<0)
    return 0;

    return subset(arr,index+1,sum,n) + subset(arr, index, sum-arr[index] ,n);
}

int main()
{
    int arr[]={2,3,4};
    int sum=6;

   cout<< subset(arr,0,sum,3);
}