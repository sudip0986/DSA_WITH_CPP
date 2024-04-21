#include <iostream>
using namespace std;
int main()
{
    int arr[5][5]=
    {
       4,8,15,25,60,
       18,22,26,42,80,
       36,40,45,68,104,
       48,50,72,83,130,
       70,99,114,128,170
    };

    int x;
    cin>>x;

    int row= 0, col= 4;          // start from 60
    while(row<5 && col>=0)
    {
        if(arr[row][col]==x)                                // 60==50? no 
        {cout<<"the row is : "<<row<<"\nthe colloum is: "<<col;
                    return 0;}

        else if(x<arr[row][col])            //50 < 60 ? yes so col -- (bam pase jabe)
        col--;
        else                              // 50 > __ yes row {niche asbe}
        row++;
    }
}