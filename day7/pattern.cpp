#include<iostream>
using namespace std;
int main(){
    int num,pow,i;
    cout<<"enter the number : ";
    cin>>num;
    cout<<"enter the power: ";
    cin>>pow;
    int ans=1;

    for(i=1; i<=pow ; i++){
        ans = ans *num;

    }
    cout<<"the ans is "<<ans;

}