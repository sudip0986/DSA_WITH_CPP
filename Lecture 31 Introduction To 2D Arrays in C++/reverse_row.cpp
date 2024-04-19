#include <iostream>
using namespace std;

void  given_matrix(int arr[][3], int row, int col)
{
    for(int row=0;row<3;row++)
    {
        for(int col=0; col<3; col++)
        {
           cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
}


int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; 

    given_matrix(arr,3,3);
    
    cout<< "the revese array matrix is :\n";
    for(int i=0; i<3; i++)
    {
        int start=0, end=3-1;
        while(start<=end)
        {
            swap(arr[i][start],arr[i][end]);
            start++,end--;
        }
    }

     for(int row=0;row<3;row++)
    {
        for(int col=0; col<3; col++)
        {
           cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}