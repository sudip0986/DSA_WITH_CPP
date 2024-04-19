#include <iostream>
using namespace std;
int main()
{
    string s ;
    cin>>s;
    int start=0 ,end = s.size()-1;
    while(start<end){
        if(s[start]!=s[end]){
        cout<<" not palindrome";
        return 0;
        }

        start+=1;
        end-=1;
        
    }
    cout <<"palindrome";
}