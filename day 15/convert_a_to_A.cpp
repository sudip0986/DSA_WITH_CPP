#include <iostream>
using namespace std;

void fun(int x){
    int z=x-32;
    cout<< (char)z;
}

int main(){
    char x;
    cout<<"enter the alphabet : ";
    cin>> x ;
    fun(x);
}