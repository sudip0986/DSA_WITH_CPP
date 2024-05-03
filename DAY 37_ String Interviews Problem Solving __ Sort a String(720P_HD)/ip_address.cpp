#include <iostream>
#include <string>
using namespace std ;

int main()
{
    string adress= "192.168.0.1";           // coverted dot into [.]
    string ans;

    int index=0;
    
    while(index<adress.size())
    {
        if(adress[index]=='.')
        ans+="[.]";
        else
        ans+=adress[index];
        index ++;
    }
    cout << ans;
}