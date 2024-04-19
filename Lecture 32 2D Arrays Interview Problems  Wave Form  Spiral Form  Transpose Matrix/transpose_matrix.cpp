#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
 vector<vector<int>>mat(4,vector<int>(4));
 mat= 
 {
     {1,2,3,4},
     {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
 };

 for(int row=0; row<mat.size(); row++)
 for(int col=row+1; col<mat[0].size(); col++)                      // col = row          coloum will start from the row
 {
    swap(mat[row][col], mat[col][row]);
 }

      // display all elements
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
}