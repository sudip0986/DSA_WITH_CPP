#include <stdio.h>
void fun(int x){
    int z=x-32;
    printf("%c",(char)z);
}

int main(){
    char x;
    printf("enter the alphabet : ");
    scanf("%c",&x);
    fun(x);
    return 0;
}