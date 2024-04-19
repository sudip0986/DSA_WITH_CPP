#include <iostream>
using namespace std;
int main()
{
    int arr[6]={1,4,45,6,10,8};
    int x=13;

    for(int i=0 ; i<4; i++)
    for(int j=i+1; j<5; j++)
    for(int k=j+1; k<6; k++)
    {
        
        if( arr[i]+arr[j]+arr[k]==x)
        cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<" = "<<x;
    }
}