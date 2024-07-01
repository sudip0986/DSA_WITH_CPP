#include <bits/stdc++.h>
using namespace std;

int fiv(int n)
{
    //base
    if(n==1)
    return 1;

    if(n==0)
    return 0;

    return (fiv(n-1)+fiv(n-2));
}


int main()
{
    int n;
    cin>>n;
    cout<<fiv(n);
}