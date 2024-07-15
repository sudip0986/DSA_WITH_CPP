#include <iostream>
using namespace std;

int lc(int arr[] , int x, int index, int N)
{

    //base
    if(index==N)
    return -1;

    if(arr[index]==x)
    return index;

    return lc(arr, x, index+1, N);
}

int main()
{
    int arr[7]={0,1,2,3,4,5,6};
    cout<<lc(arr, 5, 0, 7);
}