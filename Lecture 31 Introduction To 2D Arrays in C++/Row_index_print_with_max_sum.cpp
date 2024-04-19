#include <iostream>
using namespace std;
int main()
{
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12}; 

    int sum=0;
    int row_index=0;
    for(int row=0; row<4;row++)
    {
       int  row_sum=0;
        
    for(int col=0; col<3; col++)
    {
        row_sum+=arr[row][col];
    }
        if(row_sum>sum)
        {
            sum=row_sum;
            row_index=row;
        }

    }

    cout << sum << endl << row_index;

}