#include <iostream>
using namespace std;

int sum(int arr[],int index)
{
    // base
    if(index==-1)
    return 0; 

    // return arr[index] + sum(arr,index-1);  8+2+6+7+3
    return  sum(arr,index-1) + arr[index];     // 3+7+6+2+8
   
    
}
int main()
{
    int arr[]= {3,7,6,2,8};
    
    cout<<"THe sum of array is: "<<sum(arr,4);


}
