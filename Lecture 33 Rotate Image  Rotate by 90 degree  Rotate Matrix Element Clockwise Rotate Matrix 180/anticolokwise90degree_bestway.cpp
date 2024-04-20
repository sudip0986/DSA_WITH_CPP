#include <iostream>
using namespace std;
int main()
{
     int matrix[3][3]
    =
    {
        1,2,3,
        4,5,6,
        7,8,9
    };

    //transpose the matrix
    for(int i=0; i<3; i++)
    for(int j=i+1; j<3; j++)
    {
        swap(matrix[i][j], matrix[j][i]);
    }
    // swap colloum wis
        for(int col=0; col<3; col++)
        {
           int rowstart=0, rowend=2;
           while (rowstart<rowend)
           {
            swap(matrix[rowstart][col],matrix[rowend][col]);
            rowstart++ , rowend--;
           }
        }
           // display 
     for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
    }
}