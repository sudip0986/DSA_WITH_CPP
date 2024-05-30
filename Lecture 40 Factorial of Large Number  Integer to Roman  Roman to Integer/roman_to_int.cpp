#include <iostream>
using namespace std;

int num(char s)
{
    if(s=='I')
    return 1;

    else if(s=='V')
    return 5;

    else if(s=='X')
    return 10;

    else if(s=='L')
    return 50;

    else if(s=='C')
    return 100;

    else if(s=='D')
    return 500;

    else if(s=='M')
    return 1000;
}
int main()
{
    string s;
    cin>>s;

    int sum =0;
    int index=0;
    while(index<s.size()-1)
    {
        if( num(s[index]) < num(s[index+1]) )
        sum-=num(s[index]);

         else 
         sum+=num(s[index]);

         index++;
    }

          sum+=num(s[index]);

      cout<<sum;
}