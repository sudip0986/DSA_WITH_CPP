#include <bits/stdc++.h>
using namespace std;

class human
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void fun()   // private protected and public both are accessable with in the class
    {
        a=10;
        b=20;
        c=30;
    }
};

int main()
{
    human sudip;
    // sudip.a=10;     // this is private area we can not access it
    // sudip.b = 10; // this is protected area we can not access it
    // sudip.c=10;      // public area and accessable

    sudip.fun();
}
