#include <iostream>
using namespace std;
int main()
{
    int arr[1000]={0,1};
    int n;
    cout<<"enter the number :";
    cin>>n;
    for(int i = 2; i<1000; i++){
        arr[i]=arr[i-1]+arr[i-2];

    }
    cout<<arr[n-1];
}