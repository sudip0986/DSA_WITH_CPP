#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number: ";
    cin>>n;
    for(int row = n; row>=1; row--){
        for(int col=1; col<=n-row; col++)
        cout<<"  ";
    for(int col=1; col<=row*2-1; col++)
        cout<<"*"<<" ";

    cout<<endl;
    }
}