#include <iostream>
using namespace std;
int main()
{
    int arr[8]={3,4,-2,5,8,20,-10,8};
    int total=0,perifix=0;
    for(int i=0; i<8; i++)
    {
        total+=arr[i];
    }

    for(int i=0; i<8-1; i++)
    {
        perifix+=arr[i];
        total=total-arr[i];
        if(total==perifix)
        {
            cout<<"sum of the one subarray is :"<<total;
            break;
        }
    }
}
