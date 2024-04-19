#include <iostream>
using namespace std;
int main()
{
    int arr[4][3];        // create  2d array by cpp

    
for(int row=0;row<4;row++)
    {
        for(int col=0; col<3; col++)
        {
           cin>>arr[row][col];
        }
    }

    for(int row=0;row<4;row++)
    {
        for(int col=0; col<3; col++)
        {
           cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

       // find 7 in 2d array

    for( int row=0;row<4;row++)
    {
        for( int col=0; col<3; col++)
        {
           if(arr[row][col]==7)
           {
            cout<<endl<<"yes";
            return 0;
           }
        }
      
    }
    cout<<"no";
}