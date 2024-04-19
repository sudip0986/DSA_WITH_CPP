#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>>mat(4,vector<int>(4));
    for(int col=0; col<4; col++)
    {
        if(col%2==0)
        {
            for(int row=0; row<4; row++ )
            cin>>mat[row][col];
        }

        else
        {
           for(int row=3; row>=0; row-- )
            cin>>mat[row][col]; 
        }
    }

    // display 
     for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
    {
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
    }
}