#include <iostream>
#include <vector>
#include <algorithm>  // need for sorted 
using namespace std;
int main()
{
    vector<int>v={32,4,23,523,52};

    // print first element

    cout<<v[0]<<endl;
    cout<<v.front()<<endl;

    // print last element

    cout<<v[v.size()-1]<<endl;
    cout<<v.back()<<endl;

    cout <<"--------------------------------------\n";
      cout<<"a = ";
    vector<int>a;
    //copy value in a
    a=v;

for(int i=0; i<a.size();i++)
cout<<a[i]<<" ";
cout<<endl;

// sorted in increasing order 

 sort(a.begin(), a.end()); 
  
cout << "sorted in increasing order  \n"; 
for(int i=0; i<a.size();i++)
cout<<a[i]<<" ";
cout<<endl; 

// sorted in decreasing order 
  
    sort(a.begin(),a.end(), greater<int>());
    cout << "sorted in decreasing order  \n"; 

for(int i=0; i<a.size();i++)
cout<<a[i]<<" ";
cout<<endl; 

// sorted in decreasing order 
  
    sort(a.rbegin(),a.rend() );           // ,greater<int>a() na likhe reverse(r) diyeo koraa jai
    cout << "sorted in decreasing order  \n"; 

for(int i=0; i<a.size();i++)
cout<<a[i]<<" ";                
cout<<endl; 



}