/*
#include <iostream>
using namespace std;
 void incr(int* ptr)
 {
    *ptr= *ptr+1;
 }

int main()
{
   int num=10;
   incr(&num);
   cout<<num;
}  */

#include <iostream>
using namespace std;
 void dub(int* ptr)
 {
    for(int i=0;i<5;i++)
    ptr[i]= 2*ptr[i];      // *(p+i)=2* *(p+i);
 }

 int main()
 {
    int arr[5]={1,2,3,4,5};
    dub(arr);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
 }