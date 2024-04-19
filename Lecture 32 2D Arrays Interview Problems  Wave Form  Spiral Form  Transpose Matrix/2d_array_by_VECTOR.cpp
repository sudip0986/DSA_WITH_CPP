#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // create 2d vector
    int row,col;
    cout<<"enter the row : ";
    cin>>row;
    cout<<"enter the col : ";
    cin>>col;
    // vector<vector<int>>matrix(row,vector<int>(col,0)); // all element is 0;

    // pass value by usuer
    vector<vector<int>>matrix(row,vector<int>(col));
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
    {
        cin>>matrix[i][j];
    }
    
    }

    //                               display all elements
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
    }

    cout<<"\n\n";

    cout<<"ROW = " << matrix.size();             //FIND ROW 
     cout<<"\ncoloum = " << matrix[0].size();        //FIND coloum 

}
