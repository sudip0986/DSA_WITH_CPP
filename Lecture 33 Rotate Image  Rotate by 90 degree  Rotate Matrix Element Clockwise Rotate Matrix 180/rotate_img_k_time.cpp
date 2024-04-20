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
    int k;
    cout<<"how many time you want to rotate : ";
    cin>>k;
    k=k%4;
  for(int i=0; i<k; i++)
  {
     // reverse or  transpose
    for(int row=0; row<3; row++)
    for(int col=row+1; col<3; col++)
    {
        swap(matrix[row][col],matrix[col][row]);
    }

    // ultano

    for(int i=0; i<3; i++)
    {
        int start=0 , end=2;
        while(start<end)
        {
            swap(matrix[i][start],matrix[i][end]);
            start++,end--;
        }
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
