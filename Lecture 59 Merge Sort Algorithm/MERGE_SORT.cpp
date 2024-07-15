#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int start, int mid, int end)
{
    vector<int>temp(end-start+1);
    int left=start, right=mid+1, index=0;
    while((left<=mid) && (right<=end))
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            left++,index++;
        }
        else
        {
            temp[index]=arr[right];
            right++,index++;
        }
    }
// left array is not empty yet
    while(left<=mid)
    {
        temp[index]=arr[left];
            left++,index++;
    }

//right array is not empty yet
    while(right<=end)
    {
        temp[index]=arr[right];
            right++,index++;
    }

// put temp values in array
    index=0;
    while(start<=end)
    {
        arr[start]=temp[index];
        start++,index++;
    }
    
}

void mergesort(int arr[],int start, int end)
{

    //base
    if(start==end)
    return;

    int mid= start + (end-start)/2;
    //left
    mergesort(arr,start,mid);
    //rigt
    mergesort(arr,mid+1,end);
    //merge
    merge(arr,start,mid,end);
}


int main()
{
    int arr[]={6,3,1,2,8,9,10,7,3,10};
    mergesort(arr,0,9);
    for(auto u:arr)
    cout<<u<<" ";
}