#include <iostream>
using namespace std;
                                                    
int main()
{
    int arr[8]={1,4,6,8,10,14,16,18};          // search the index of 5 or unknown number 
    int start=0, end =7, n;
    cout<<"which number of index you want to find out : ";
    cin>> n;
    int index;
    while(start<=end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == n) {
            // cout << "The index of "<<n<<" is " << mid << endl; // Output 'mid' when known number is found
            index = mid;
            break;
        }
        else if(arr[mid]>n)
       {
         index=mid;
         end = mid-1;
       }
        else
        start=mid+1;
    
}
cout<<"The index of "<<n<<" is " << index << endl; // Output 'mid' when 5 or unknown number is found
}