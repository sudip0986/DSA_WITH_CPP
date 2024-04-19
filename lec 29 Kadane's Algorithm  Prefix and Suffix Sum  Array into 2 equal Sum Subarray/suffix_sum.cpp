#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>prefix_sum(5);
    int arr[5]={1,2,3,4,5};
    prefix_sum[5-1]=arr[5-1];
    for(int i= 5-2; i>=0 ; i--)
    {
        prefix_sum[i]=prefix_sum[i+1]+arr[i];
    }

    for(int i=0;i<5;i++)
    cout<<prefix_sum[i]<<" ";
}