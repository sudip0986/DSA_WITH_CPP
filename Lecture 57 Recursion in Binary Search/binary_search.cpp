#include <iostream>
#include <algorithm>
using namespace std;

int bc(int arr[],int st,int end, int x)
{
    int mid=st+(end-st)/2;
    if(st>end)
    return -1;

    if(arr[mid]==x)
    return mid;

    else if(arr[mid]<x)
    bc(arr, mid+1, end,x);

    else if(arr[mid]>x)
    bc(arr, st, mid-1, x);
}

int main()
{
    int arr[7]={0,1,5,3,6,2,4};
    sort(arr, arr+7);  /////sort non decreasing order for binary search 
    for(auto u:arr) cout<<u<<" ";
    cout <<endl;
    cout<<bc(arr, 0, 7, 5);
    
}