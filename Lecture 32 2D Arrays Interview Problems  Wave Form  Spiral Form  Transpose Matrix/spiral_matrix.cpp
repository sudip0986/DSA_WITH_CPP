#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>>mat(3,vector<int>(3));
    
    int top=0; // row
    int bottom=2 ;//row
    int left=0;   // coloum
    int right=2;  //coloum

    while(top<=bottom && left<=right)
    {

    
        /////////////////////////////////////////// left to right
    for(int i=left ; i<=right; i++)
    {
        cin>> mat[top][i];
        
    }
    top ++;
        ////////////////////////////////////////// top to bottom
    for(int i=top; i<=bottom; i++)
    {
        cin>> mat[i][right];
        
    }
    right--;
    //////////////////////////////////////////////// right to left
    if(top<=bottom)
    {for(int i=right ; i>=left; i--)
    {
        cin>> mat[bottom][i];
        
    }
    bottom--;
    }
    //////////////////////////////////////////////// bottom to top
    if(left<=right)
    {
        for(int i=bottom; i>=top; i--)
    {
        cin>> mat[i][left];
        
    }
    left++;
    }

    }

    //                               display all elements
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
    {
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
    }
}
