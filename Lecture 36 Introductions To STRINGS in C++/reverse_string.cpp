#include <iostream>
using namespace std;
int main()
{   
    string s ;
    getline(cin,s);
    int start=0, end =s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start+=1;
        end-=1;
    }
    cout << s;
}
