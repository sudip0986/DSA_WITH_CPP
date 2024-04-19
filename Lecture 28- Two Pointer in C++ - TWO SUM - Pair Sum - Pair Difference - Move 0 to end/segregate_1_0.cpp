#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int start=0,end=n-1;
    // first way of segregat /////////////////////////////////////////////////////////////////////
    sort(arr.begin(),arr.end());

    cout<<"first way of segregat by using vector sort:";
     for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    
// 2nd way of segregat by using 2 fector  /////////////////////////////////////////////////////////////////////
    while(start<end)
    {
        if(arr[start]==0)
        start++;

        else 
        {
            if(arr[end]==0)
            {
                swap(arr[start],arr[end]);
                start++;
                end--;
            }

            else 
            end--;
        }
    }
cout<<"2nd way of segregat by using 2 fector : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}