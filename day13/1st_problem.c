#include <stdio.h>
int main()
{
    int num,rem,sum;
    num=635;
    while(num>9){
    sum=0;
    
    while(num!=0){
        rem=num%10;
        num/=10;
        sum+=rem;
    };
    num=sum;}
    printf("%d",sum);
    return 0;
}