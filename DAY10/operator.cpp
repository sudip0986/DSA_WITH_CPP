#include <iostream>
using namespace std ;

int sum(int n){
    if(n==1)
    return 1;  
    return n + sum(n-1);
}


int main(){
    int n;
    cout<<"inter your number";
    cin>>n;
    cout<<"the sum is: "<<sum(n);
}