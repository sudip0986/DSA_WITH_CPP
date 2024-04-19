#include <iostream>
using namespace std;
int main()
{int num ,sum, rem;
num=635;
    while(num>9){
    sum=0;
    
    while(num!=0){
        rem=num%10;
        num/=10;
        sum+=rem;
    };
    num=sum;}
    cout<<sum;
}