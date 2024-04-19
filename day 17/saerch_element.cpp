#include <iostream>
using namespace std;
int main(){
    int index =-1;
    int i, input;
    cout<< "enter your number : ";
    cin>>input;
    int arr[5]={1,2,3,6,5};
    for(int i=0; i<5; i++){
        if (arr[i]==input){
            index=i;
            break;
        }

    }
    cout<<index;
}