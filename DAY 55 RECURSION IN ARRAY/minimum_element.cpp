#include <iostream>
using namespace std;

int min_element(int arr[],int index)
{
    // base
    if(index==0)
    return arr[0]; 

   
    return min(arr[index] , min_element(arr,index-1) );    
   
    
}
int main()
{
    int arr[]= {3,1,6,2,8};
    
    cout<<"THe sum of array is: "<<min_element(arr,4);


}
