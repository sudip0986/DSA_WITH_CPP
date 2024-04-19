#include <stdio.h>
int main(){
int a=76;
if(a>80)  printf("a++");
switch(a-5){
case 1:
  printf("grade A");
  break;

  case 2:
  printf("grade A-");
  break;

  case 3:
  printf("grade b+");
  break;

  case 4:
  printf("grade b-");
  break;

  case 5:
  printf("grade c");
  break;}
return 0;
}