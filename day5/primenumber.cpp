#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the number";
    cin>>n;
    if(n<2)
    {
        cout<<"not prime number";
        return 0;
    }
    else {
        for(i=2;i<n;i++)
            if(n%i==0){
                cout<<"not prime";
                return 0;
            }
        
        

    }
    cout<<"prime number";
}