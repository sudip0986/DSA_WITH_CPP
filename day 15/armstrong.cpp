#include <iostream>
using namespace std;


bool armstromg(int org,int count ){
    int num=org,ans=0;
    int rim;
    while(num){
        rim=num%10;
        num=num/10;
        ans=ans + pow(rim,count);  //problem hereeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
    }

    if(org==ans)
    return 1;

    else 
    return 0;
}

int digit(int x){
    int count =0;
    while(x){
        count++;
        x=x/10;
    }
    return count ;
}

int main(){
    int num;
    cout <<"nember plz :";
    cin>> num;
    int count = digit(num);
    cout<< armstromg(num,count);
}