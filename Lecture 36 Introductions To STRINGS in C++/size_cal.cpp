#include <iostream>
using namespace std;
int main()
{
    string a ;
    getline(cin,a);
    cout<<a.size()<<endl;

    // without size()

    int size =0;
    while(a[size] !='\0'){      //we know string allaws add '\0' (nul space ) in last+1 bits   sudip\0 though user input sudip , here \0 added autometically in 5 number index 
        size++;
    }
    cout<<"the size is "<<size;
}
