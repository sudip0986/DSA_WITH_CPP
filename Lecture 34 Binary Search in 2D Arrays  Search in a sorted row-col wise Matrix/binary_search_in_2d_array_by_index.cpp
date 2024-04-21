#include<iostream>
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

    int start=0, end=3*5+4;   // or 4*5-1 // N*M-1      //  index = row_index*col +col_index
    while(start<=end)
    {
        int mid_index= start + (end-start)/2;
        int row_index = mid_index / 5;             // row_index = index / col
        int col_index = mid_index % 5;             //col_index = index % col
        if(arr[row_index][col_index] == x)
        {
            cout<<"the row is : "<<row_index<<"\nthe colloum is: "<<col_index;
                    return 0;
        }
        else if ( arr[row_index][col_index] < x)
        start++;
        else
        end--;
    }
    
}