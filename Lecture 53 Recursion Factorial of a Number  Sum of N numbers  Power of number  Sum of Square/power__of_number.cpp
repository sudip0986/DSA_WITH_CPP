#include <iostream>
using namespace std;

int power(int n, int p)
{
    //base
    if(p==1)
    return 2;

    return n*power(n,p-1);
}


int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);
}