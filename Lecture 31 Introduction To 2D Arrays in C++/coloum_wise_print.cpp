#include <iostream>
using namespace std;


void funcol(int arr[][3], int row, int col)      // here arr[][3]  3 is necessarry because compiler calculated index = adress + (rw_index * coloum +col_index)* size here 3 is a coloum
   {
     for( row=0;row<4;row++)
    {
        for( col=0; col<3; col++)
        {
           cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

 

   }

int main()
{
     int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    
    // print all the value of array in coloumn wise by function call

    funcol(arr,4,3);

}