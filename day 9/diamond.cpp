#include <iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"enter the number: ";
    cin>>n;
    
    for(row=1; row<=n; row++){
            // space
    for(col=row;col<n; col++)
    cout<<" ";
        // star
        for(col=1;col<=row;col++)
        cout<<"* " ;

    

    cout<<endl;
    }

    for(row=1; row<=n; row++){
            // space
    for(col=1;col<=row; col++)
    cout<<" ";
        // star
        for(col=1;col<=n-row;col++)
        cout<<"* " ;

    

    cout<<endl;

}
}