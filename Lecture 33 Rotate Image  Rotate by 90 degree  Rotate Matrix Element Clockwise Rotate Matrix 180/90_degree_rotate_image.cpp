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

    int mat2[3][3];

    for(int row=0; row<3; row++)
    for(int col=0; col<3; col++)
    {
        mat2[col][2-row]=matrix[row][col];
    }

     // display 
     for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
    {
        cout<<mat2[i][j]<<" ";
    }
    cout<<endl;
    }

}

////////////// space complaxity o(n*n)

// so this is not better
