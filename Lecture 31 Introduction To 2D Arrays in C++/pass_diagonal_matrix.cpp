#include <iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; 
    int sum=0;

    for(int row=0;row<3;row++)
    {
        for(int col=0; col<3; col++)
        {
           cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<< "diagonal element are :";

    for(int row=0;row<3;row++)
    {
        for(int col=0; col<3; col++)
        {
           if(row==col)
           {cout<<arr[row][col]<<" ";
           sum+=arr[row][col];}
        }
       
       
    }

    cout<<endl<< "\nthe sum of diagonal elements is : "<<sum;
   
}