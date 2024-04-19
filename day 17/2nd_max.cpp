#include <iostream>
using namespace std;
 int main(){
    int arr[6]={1,2,3,4,500,6000};
    int  elder=WINT_MIN;
    int secelder =WINT_MIN;
    for(int i=0; i<6 ;i++){
        if (arr[i]>elder){
            elder = arr[i];
        }
    }

        for(int i=0; i<6 ;i++){
        if (arr[i]>secelder && arr[i]!=elder){
            
            secelder = arr[i];
        }
    }
    cout<<"first max is "<<elder<<endl;
    cout<<"second max is "<<secelder;

 }
