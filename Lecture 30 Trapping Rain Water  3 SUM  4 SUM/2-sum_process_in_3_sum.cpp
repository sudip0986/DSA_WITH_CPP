#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>arr{1,4,45,6,10,8};
    sort(arr.begin(),arr.end());       // fisrt sort the vector  {1,4,6,8,10,45}
    int x=24;

    for(int i=0; i<arr.size()-2; i++)
    {
            int need= x-arr[i];
        int start=i+1,end=arr.size()-1;

        while(start<end)
        {
            if((arr[start]+arr[end])==need)
            {
                cout<<arr[i]<<"+"<<arr[start]<<"+"<<arr[end]<<" = "<<x;
                return 1;
            }
            else if((arr[start]+arr[end])>need)
            end--;
            else start++;
        }
    }
    return 0;
}