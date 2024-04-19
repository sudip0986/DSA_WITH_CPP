#include <iostream>
using namespace std;
int main()
{
    int arr[8]={9,5,8,12,2,3,7,4};
    int right_sight_big_element=0, dif=INT16_MIN;

    for(int i=8-1; i>=0; i--)
    {
        right_sight_big_element=max(right_sight_big_element , arr[i]);           // max number determine of right sight
        dif=max(dif , right_sight_big_element-arr[i]);                          // max difference

    }
    cout<<dif;
}

