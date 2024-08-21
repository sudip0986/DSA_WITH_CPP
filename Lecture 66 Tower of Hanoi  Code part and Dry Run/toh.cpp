#include <bits/stdc++.h>
using namespace std;

void toh(int n, char road1, char road2, char road3)
{
    if(n==1)
    {
        cout<<n<< road1 <<" to "<< road3<<endl;
        return;
    }

    toh(n-1,road1,road3, road2);
    cout<< n<< road1 <<" to "<< road3<<endl;

    toh(n-1,road2,road1,road3);
}

int main()
{
    cout<<"print the number of plate : ";
    int n;
    cin>>n;

     char road1='A';
     char road2='B';
     char road3='C';

    toh(n, road1, road2, road3);
}