#include <iostream>
#include <stack>
using namespace std;


int main()
{
 stack<int>S;
    S.push(5);
    // S.push(6);
    // S.push(7);
    // S.push(8);
    // S.push(9);
    // S.push(10);

    cout<<S.size()<<endl;
    //top
    cout<<S.top()<<endl;

    S.pop();
    // cout<<S.top()<<endl;

    cout<<S.empty();
};