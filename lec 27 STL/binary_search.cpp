#include <iostream>
#include <vector>
#include <algorithm>  // need for binary_search && sorted
using namespace std;
int main()
{
    vector<int>v={32,4,23,523,52};
    
    // to use binary_search, first you  have to sort the vector or array 
    
    sort(v.begin(),v.end());
    cout<<"v=";
    for(int i=0; i<v.size();i++)
    cout<< v[i]<<" ";

    cout<<endl;
    
    cout<<binary_search(v.begin(),v.end(), 523)<<endl;
    cout<<binary_search(v.begin(),v.end(), 500)<<endl;

    
    //determined the index of 32
    int x= find(v.begin(),v.end(),32) - v.begin() ;
    cout<< x;

}