#include <iostream>
using namespace std;

int main()
{
    // variabble er jonno heap memory allocate koro
     int * ptr =  new int;
    cout<<ptr<<endl;
    *ptr=5;      // value assign 
    cout<<*ptr<<endl;

    float * ptr1 = new float;
    *ptr1=3.9;  // value assign
    cout<<*ptr1<<endl;

    // array assign 
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int *arrptr= new int[n];

    // value dao array te
    for(int i=0; i<n; i++ )
    arrptr[i]=i+1;              // array er khetre address er opore rekhe dile hoy 
                                // but variable er khetre *ptr er vitore jeye value rakhte hoy

    // print koro 
    for(int i=0; i<n; i++ )
     cout<<arrptr[i]<<" ";

     // delete keyword use koro nai memory er jaiga khabe

     delete ptr;
     delete ptr1;
     delete []arrptr;

}