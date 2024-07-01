#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{

      // base condition 
    if(n==0)
    {
        cout<< "HAPPY BIRTHDAY";
        return ;
    }

    // loop 
    cout<<n<<" "<<"days left for birthday \n";
    fun(n-1);
};

int main ()
{
    fun(10);
}