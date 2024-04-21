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

    for(int row=0; row<5; row++)
    {
        if(arr[row][0]<=x && x<=arr[row][5-1])
        {
            int start = 0, end=5-1;
            while(start<=end)
            {
                int mid = start + (end- start)/2;
                if(arr[row][mid] == x)
                {
                    cout<<"the row is : "<<row<<"\nthe colloum is: "<<mid;
                    return 0;
                    
                }
                else if(arr[row][mid] < x)
                start=mid+1;
                else
                end=mid-1;
            }
        }
    }
}