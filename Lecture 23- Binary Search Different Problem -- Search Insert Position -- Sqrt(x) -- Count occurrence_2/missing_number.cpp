#include <iostream>
using namespace std;
int main()
{
    int arr[6]={2,3,4,7,11,12};
    for(int i = 1; i<=12; i++)
    {
        for(int j = 0; j<6; i++)
        {
            if(arr[j]>i)
            cout<<i<<endl;
            break;
            if(arr[j]==i)
            break;
            else
            cout<<i<<endl;
        }
    }
}