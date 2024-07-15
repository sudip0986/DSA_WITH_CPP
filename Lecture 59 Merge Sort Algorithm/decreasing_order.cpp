#include <bits/stdc++.h>
using namespace std;

void desort(int arr[], int start,int mid, int end)
{
    vector<int>temp(end-start+1);
    int left=start, right=mid+1, index=0;
    while(left<=mid && right<=end)
    {
        if(arr[left]>=arr[right])
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
    // right array is not empty yet
    while(right<=end)
     {
            temp[index]=arr[right];
            right++,index++;
        }

    index=0;
    while(start<=end)
    {
        arr[start]=temp[index];
        start++,index++;
    }

}

void demerge(int arr[], int start, int end)
{
    int mid= start + (end-start)/2;

    if(start>=end)
    return;
    
    //left
    demerge(arr, start, mid);
    //right
    demerge(arr, mid+1, end);
    desort(arr,start, mid , end);
}

int main()
{
    int arr[]={6,3,1,2,8,9,10,7,3,10};
    demerge(arr,0,9);
    for(auto u:arr) cout<<u<<" ";
}