 #include <bits/stdc++.h>
 using namespace std;

 int gcd(int a, int b)         /////// learn about gccd algorithm
 {
    //base
    if(b==0)
    return a;

    return gcd(b,a%b);
 }

 int main()
 {
    int n, m;
    cin>>n>>m;
    if(m>n)
    swap(n,m);

    cout<<gcd(n,m);
 }