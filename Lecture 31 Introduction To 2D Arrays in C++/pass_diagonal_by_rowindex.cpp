#include <iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; 
    int sum1=0;
    int sum2=0;

    for(int row=0;row<3;row++)
    {
        for(int col=0; col<3; col++)
        {
           cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    // first diagonal elements sum//////////////////////////////////////////////////////////////////

    cout<<endl<< "first diagonal element are :";

    for(int row=0;row<3;row++)
    {
           cout<<arr[row][row]<<" ";
           sum1+=arr[row][row];
           
           }
        cout<<endl<< "The sum of first diagonal elements is : "<<sum1<<endl;

  //  second diagonal sum////////////////////////////////////////////////////////////////////////
        cout<<endl<< "second diagonal elementS are :";
       int row=0,col=3-1;
       while( col>=0)
       {
            {cout<<arr[row][col]<<" ";
           sum2+=arr[row][col];}
           row++;
           col--;
       }
       
    
          cout<<endl<< "The sum of second diagonal elements is : "<<sum2;
    
   
}