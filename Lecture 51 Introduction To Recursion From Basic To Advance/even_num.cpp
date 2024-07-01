#include <iostream>
using namespace std;

// recursion fun
void output (int n)
{
    // base condition 
    if(n==2)
    {
        cout<< n <<"\n";
        return;
    }

// loop 
    cout<< n <<"\n";
   output(n-2);
}

int main ()
{
    int x;
    cin>>x;
    output(x);
}