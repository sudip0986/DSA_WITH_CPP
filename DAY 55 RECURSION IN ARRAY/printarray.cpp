#include <iostream>
using namespace std;

void pr(int arr[],int index)
{
    // base
    if(index==-1)
    return; 

    pr(arr,index-1);
    cout<<arr[index]<<" ";
    //pr(arr,index-1);           // for reverse
    
}
int main()
{
    int arr[]= {3,7,6,2,8};
    
    pr(arr,4);


}
