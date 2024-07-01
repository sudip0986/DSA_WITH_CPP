#include <iostream>
using namespace std;

// int sum=1;

// void factorial(int n)
// {
   
//    //base 
//    if(n==1)
//    {
//     cout<<sum;
//     return;
//    }

//    sum*=n;
//    factorial(n-1);
// }

/// standard way

int factorial( int n)
{
    //base
    if(n==1)
    return 1;

    return (n* factorial(n-1));
}

int main()
{
    int n;
    cin >>n;
    if(n<0)
    {
        cout<<"factorial is not possibled";
        return 0;
    }
   //factorial(n);
   cout<< factorial(n);
}