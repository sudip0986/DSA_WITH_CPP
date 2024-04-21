#include <iostream>
using namespace std;
int main()
{
    int arr[4][5]=
    {
        2,6,10,14,18,
        20,24,27,29,38,
        47,52,78,93,102,
        108,111,123,200,300
    };

    int x;
    cin>>x;

    for(int row=0; row<4; row++)
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