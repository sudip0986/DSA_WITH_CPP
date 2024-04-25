#include <iostream>
using namespace std;
int main()
{
    int num =10;
    int & temp = num;
    temp ++;
    cout<<num;
}